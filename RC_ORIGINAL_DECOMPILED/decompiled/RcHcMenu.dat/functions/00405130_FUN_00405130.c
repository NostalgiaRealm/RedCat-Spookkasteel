/*
 * FUN_00405130 at 00405130
 * undefined __register FUN_00405130(VARIANT * param_1, VARIANTARG * param_2, int param_3)
 * Address ranges: 00405130-0040514b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00405130(VARIANT *param_1,VARIANTARG *param_2,int param_3)

{
  if ((param_3 != 0x100) && (param_3 != 0x101)) {
    FUN_0040503c(param_1,param_2,param_3);
    return;
  }
  thunk_FUN_00402874((uint)param_1);
  return;
}

