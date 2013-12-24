package org.glmdb.blueprints.iter;

import com.tinkerpop.blueprints.Direction;
import com.tinkerpop.blueprints.Edge;
import org.glmdb.blueprints.ThunderEdge;
import org.glmdb.blueprints.ThunderGraph;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;

/**
 * Date: 2013/11/24
 * Time: 10:22 AM
 */
public class EdgesFromVertexIterable<T extends Edge> extends BaseThunderIterable implements Iterable<ThunderEdge> {

    private final Direction direction;
    private final List<String> labels;

    public EdgesFromVertexIterable(ThunderGraph thunderGraph, long vertexId, Direction direction, String[] labels) {
        super(thunderGraph, vertexId);
        this.direction = direction;
        this.labels = new ArrayList<String>(Arrays.asList(labels));
    }

    @Override
    public Iterator<ThunderEdge> iterator() {
        if (this.labels.isEmpty()) {
            return new EdgesIterator();
        } else {
            return new EdgesIteratorForLabel();
        }
    }

    private class EdgesIteratorForLabel extends BaseThunderIterator<ThunderEdge> implements Iterator {

        private Iterator<String> labelIterator;

        private EdgesIteratorForLabel() {
            super();
            this.labelIterator = EdgesFromVertexIterable.this.labels.iterator();
            //No need to check hasNext as Iterator<ThunderEdge> iterator() ensures there is at least one label.
            this.currentLabel = this.labelIterator.next();
        }

        @Override
        EdgesFromVertexIterable getParentIterable() {
            return EdgesFromVertexIterable.this;
        }

        @Override
        protected void internalRemove() {
            EdgesFromVertexIterable.this.thunderGraph.getThunder().removeEdge(EdgesFromVertexIterable.this.tc.getTxn(), this.internalNext.getInternalId());
        }

        @Override
        protected ThunderEdge internalNext() {

            long edgeIdArray[] = new long[1];
            long outVertexIdArray[] = new long[1];
            long inVertexIdArray[] = new long[1];

            while (this.currentLabel != null) {
                if (this.goToFirst) {
                    this.goToFirst = false;

                    //Check if cursor needs reopening. This happens if a read only transaction is upgraded to a write transaction
                    //after the iterator was instantiated.
                    if (isRefresh()) {
                        refreshFirst();
                    }

                    if (EdgesFromVertexIterable.this.thunderGraph.getThunder().getFirstEdgeFromVertex(
                            this.cursor, EdgesFromVertexIterable.this.direction, currentLabel, EdgesFromVertexIterable.this.vertexId, edgeIdArray, outVertexIdArray, inVertexIdArray)) {
                        this.currentEdgeOutVertexId = outVertexIdArray[0];
                        this.edgeId = edgeIdArray[0];
                        return new ThunderEdge(EdgesFromVertexIterable.this.thunderGraph, edgeIdArray[0], currentLabel, outVertexIdArray[0], inVertexIdArray[0]);
                    } else {
                        if (this.labelIterator.hasNext()) {
                            this.currentLabel = this.labelIterator.next();
                            this.goToFirst = true;
                        } else {
                            this.currentLabel = null;
                        }
                    }
                } else {
                    //Check if cursor needs reopening. This happens if a read only transaction is upgraded to a write transaction
                    //after the iterator was instantiated.
                    if (isRefresh()) {
                        refreshNext();
                        if (this.cursor != null && EdgesFromVertexIterable.this.thunderGraph.getThunder().getCurrentEdgeFromVertex(
                                this.cursor, EdgesFromVertexIterable.this.direction, currentLabel, EdgesFromVertexIterable.this.vertexId, edgeIdArray, outVertexIdArray, inVertexIdArray)) {

                            //Check if the current is really the current.
                            //If the current has been removed then current is in fact the next
                            //if it is already next then do nothing, else get the next
                            if (this.edgeId == edgeIdArray[0]) {
                                if (EdgesFromVertexIterable.this.thunderGraph.getThunder().getNextEdgeFromVertex(
                                        this.cursor, EdgesFromVertexIterable.this.direction, currentLabel, EdgesFromVertexIterable.this.vertexId, edgeIdArray, outVertexIdArray, inVertexIdArray)) {

                                    this.currentEdgeOutVertexId = outVertexIdArray[0];
                                    this.edgeId = edgeIdArray[0];
                                    return new ThunderEdge(EdgesFromVertexIterable.this.thunderGraph, edgeIdArray[0], currentLabel, outVertexIdArray[0], inVertexIdArray[0]);

                                } else {
                                    return null;
                                }
                            } else {

                                this.currentEdgeOutVertexId = outVertexIdArray[0];
                                this.edgeId = edgeIdArray[0];
                                return new ThunderEdge(EdgesFromVertexIterable.this.thunderGraph, edgeIdArray[0], currentLabel, outVertexIdArray[0], inVertexIdArray[0]);
                            }

                        } else {
                            return null;
                        }

                    } else {
                        if (EdgesFromVertexIterable.this.thunderGraph.getThunder().getNextEdgeFromVertex(
                                this.cursor, EdgesFromVertexIterable.this.direction, currentLabel, EdgesFromVertexIterable.this.vertexId, edgeIdArray, outVertexIdArray, inVertexIdArray)) {

                            this.currentEdgeOutVertexId = outVertexIdArray[0];
                            this.edgeId = edgeIdArray[0];
                            return new ThunderEdge(EdgesFromVertexIterable.this.thunderGraph, edgeIdArray[0], currentLabel, outVertexIdArray[0], inVertexIdArray[0]);
                        } else {
                            if (this.labelIterator.hasNext()) {
                                this.currentLabel = this.labelIterator.next();
                                this.goToFirst = true;
                            } else {
                                this.currentLabel = null;
                            }
                        }
                    }
                }
            }
            return null;
        }
    }

    private class EdgesIterator extends BaseThunderIterator<ThunderEdge> implements Iterator {

        private EdgesIterator() {
            super();
        }

        @Override
        EdgesFromVertexIterable getParentIterable() {
            return EdgesFromVertexIterable.this;
        }

        @Override
        protected void internalRemove() {
            EdgesFromVertexIterable.this.thunderGraph.getThunder().removeEdge(EdgesFromVertexIterable.this.tc.getTxn(), this.internalNext.getInternalId());
        }

        @Override
        protected ThunderEdge internalNext() {

            String labelArray[] = new String[1];
            long edgeIdArray[] = new long[1];
            long outVertexIdArray[] = new long[1];
            long inVertexIdArray[] = new long[1];


            if (this.goToFirst) {
                this.goToFirst = false;

                //Check if cursor needs reopening. This happens if a read only transaction is upgraded to a write transaction
                //after the iterator was instantiated.
                if (isRefresh()) {
                    refreshFirst();
                }

                if (this.cursor != null && EdgesFromVertexIterable.this.thunderGraph.getThunder().getFirstEdgeFromVertexAllLabels(
                        this.cursor, EdgesFromVertexIterable.this.direction, EdgesFromVertexIterable.this.vertexId, labelArray, edgeIdArray, outVertexIdArray, inVertexIdArray)) {
                    this.currentLabel = labelArray[0];
                    this.currentEdgeOutVertexId = outVertexIdArray[0];
                    this.edgeId = edgeIdArray[0];
                    return new ThunderEdge(EdgesFromVertexIterable.this.thunderGraph, edgeIdArray[0], labelArray[0], outVertexIdArray[0], inVertexIdArray[0]);
                } else {
                    return null;
                }
            } else {

                //Check if cursor needs reopening. This happens if a read only transaction is upgraded to a write transaction
                //after the iterator was instantiated.
                if (isRefresh()) {
                    refreshNext();
                    if (this.cursor != null && EdgesFromVertexIterable.this.thunderGraph.getThunder().getCurrentEdgeFromVertexAllLabels(
                            this.cursor, EdgesFromVertexIterable.this.direction, EdgesFromVertexIterable.this.vertexId, labelArray, edgeIdArray, outVertexIdArray, inVertexIdArray)) {


                        //Check if the current is really the current.
                        //If the current has been removed then current is in fact the next
                        //if it is already next then do nothing, else get the next
                        if (this.edgeId == edgeIdArray[0]) {
                            if (EdgesFromVertexIterable.this.thunderGraph.getThunder().getNextEdgeFromVertex(
                                    this.cursor, EdgesFromVertexIterable.this.direction, currentLabel, EdgesFromVertexIterable.this.vertexId, edgeIdArray, outVertexIdArray, inVertexIdArray)) {

                                this.currentLabel = labelArray[0];
                                this.currentEdgeOutVertexId = outVertexIdArray[0];
                                this.edgeId = edgeIdArray[0];
                                return new ThunderEdge(EdgesFromVertexIterable.this.thunderGraph, edgeIdArray[0], currentLabel, outVertexIdArray[0], inVertexIdArray[0]);

                            } else {
                                return null;
                            }
                        } else {

                            this.currentLabel = labelArray[0];
                            this.currentEdgeOutVertexId = outVertexIdArray[0];
                            this.edgeId = edgeIdArray[0];
                            return new ThunderEdge(EdgesFromVertexIterable.this.thunderGraph, edgeIdArray[0], currentLabel, outVertexIdArray[0], inVertexIdArray[0]);
                        }

                    } else {
                        return null;
                    }

                } else {
                    if (EdgesFromVertexIterable.this.thunderGraph.getThunder().getNextEdgeFromVertexAllLabels(
                            this.cursor, EdgesFromVertexIterable.this.direction, EdgesFromVertexIterable.this.vertexId, labelArray, edgeIdArray, outVertexIdArray, inVertexIdArray)) {
                        this.currentLabel = labelArray[0];
                        this.currentEdgeOutVertexId = outVertexIdArray[0];
                        this.edgeId = edgeIdArray[0];
                        return new ThunderEdge(EdgesFromVertexIterable.this.thunderGraph, edgeIdArray[0], labelArray[0], outVertexIdArray[0], inVertexIdArray[0]);
                    } else {
                        return null;
                    }
                }

            }

        }
    }

}
