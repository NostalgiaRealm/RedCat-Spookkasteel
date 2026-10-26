/*
 * FUN_004051b8 at 004051b8
 * bool __register FUN_004051b8(VARIANTARG * param_1)
 * Address ranges: 004051b8-004051ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_004051b8(VARIANTARG *param_1)

{
  _union_2683 local_10;
  
  if ((param_1->n1).n2.vt == 0xb) {
    local_10._8_2_ = *(short *)((int)&param_1->n1 + 8);
  }
  else {
    local_10.n2.vt = 0;
    FUN_0040503c((VARIANT *)&local_10.n2,param_1,0xb);
  }
  return local_10._8_2_ != 0;
}

