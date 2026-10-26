/*
 * FUN_004b7468 at 004b7468
 * undefined __register FUN_004b7468(VARIANT * param_1, undefined4 * param_2)
 * Address ranges: 004b7468-004b748b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b7468(VARIANT *param_1,undefined4 *param_2)

{
  FUN_00404e28(param_1,(VARIANTARG *)PTR_DAT_00572140);
  (param_1->n1).n2.vt = 0x2011;
  *(undefined4 *)((int)&param_1->n1 + 8) = *param_2;
  *param_2 = 0;
  return;
}

