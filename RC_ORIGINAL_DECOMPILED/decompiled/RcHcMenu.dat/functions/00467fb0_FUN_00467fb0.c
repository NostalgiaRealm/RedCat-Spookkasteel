/*
 * FUN_00467fb0 at 00467fb0
 * undefined __register FUN_00467fb0(int param_1, VARIANTARG * param_2, VARIANTARG * param_3)
 * Address ranges: 00467fb0-00467fed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00467fb0(int param_1,VARIANTARG *param_2,VARIANTARG *param_3)

{
  VARIANT *pVVar1;
  
  pVVar1 = (VARIANT *)FUN_00404c74(0x20,"\x0e\x10TLookupListEntry ");
  FUN_00404e28(pVVar1,param_2);
  FUN_00404e28(pVVar1 + 1,param_3);
  FUN_004121d8(*(int **)(param_1 + 4),(int)pVVar1);
  return;
}

