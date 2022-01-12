# <img src="http://rrwick.github.io/Bandage/images/logo.png" alt="Bandage" width="115" height="115" align="middle">Bandage-edit

## Description

Bandage is a GUI program that allows users to interact with the assembly graphs made by *de novo* assemblers such as <a href="https://www.ebi.ac.uk/~zerbino/velvet/" target="_blank">Velvet</a>, <a href="http://bioinf.spbau.ru/spades" target="_blank">SPAdes</a>, <a href="https://github.com/voutcn/megahit" target="_blank">MEGAHIT</a> and others. This project is a modified version of Bandage, which enables some new features that provide a more user-friendly way of editing assembly graph and facilitate analysis of sequence assembly result.

For more detailed information about Bandage please refer to <a href="https://github.com/rrwick/Bandage" target="_blank">the original Bandage site</a>.

## New Features

#### New Arrowhead Shape

Arrowheads can display the direction of segments in single node style. We modified the shape of arrowhead, which makes it easier to identify the direction of segments. We also make the arrowhead mode enabled by default in single node mode for user's convenience.

#### Deformation Sensitivity

For the original Bandage, users can reposition and reshape nodes by dragging with the mouse. Here, we added a new parameter 'sensitivity' on the control panel. By adjusting the sensitivity value, user can control deformation sensitivity when dragging the segments. With a large sensitivity value, only segment part close to the dragging point can be affected, so that user can change the local shape of the segment, while with a small sensitivity value, segment far from the dragging point can also be affected, user can change the general location of the segment.

#### New Colour Scheme

We also added new colour scheme based on tags. Bandage will read all the tag types and tag values when scanning the input sequence assembly file. Users can choose 'colour by tag' option in the Graph display section. Bandage will give a list of all the contained tags. By choosing a random tag, Bandage will colour segments with the same value the same colour.

#### Tag Information on the Panel

For the original Bandage, when a segment is selected, its length and depth are shown on the right panel. in the modified version, the segment's tags and values are also shown on the panel, providing more information about the segments.

## Installation

The installation is the same as the original project. Please refer to <a href="https://github.com/rrwick/Bandage#building-from-source" target="_blank">the original project page</a>.

