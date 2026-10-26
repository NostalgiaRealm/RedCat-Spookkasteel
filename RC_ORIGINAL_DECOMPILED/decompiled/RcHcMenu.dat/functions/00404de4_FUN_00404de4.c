/*
 * FUN_00404de4 at 00404de4
 * undefined __register FUN_00404de4(VARIANTARG * param_1)
 * Address ranges: 00404de4-00404e25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00404de4(VARIANTARG *param_1)

{
  ushort uVar1;
  
  uVar1 = (param_1->n1).n2.vt;
  if (((uVar1 & 0x4000) != 0) || (uVar1 < 8)) {
    (param_1->n1).n2.vt = 0;
    return;
  }
  if (uVar1 == 0x100) {
    (param_1->n1).n2.vt = 0;
    FUN_00403db0((int *)((int)&param_1->n1 + 8));
    return;
  }
  if (uVar1 == 0x101) {
                    /* WARNING: Could not recover jumptable at 0x00404e06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_005733e8)();
    return;
  }
  VariantClear(param_1);
  return;
}

