#! /bin/bash

 emcc /exam/multiply.cpp --js-library /exam/multiply_in.js -o /exam/index.js -s EXPORTED_FUNCTIONS='["_multiply"]' -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall", "cwrap"]'
