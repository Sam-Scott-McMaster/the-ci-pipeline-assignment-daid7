#!/bin/bash

git add $1
git commit -m $2
git push origin

git tag $3
git log --oneline
git push origin $3
