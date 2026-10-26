/*
 * FUN_004875b0 at 004875b0
 * undefined __register FUN_004875b0(int * param_1, int param_2)
 * Address ranges: 004875b0-004875f0;0048760b-00487610
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004875b0(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4875c4;
  FUN_004713cc(param_1);
  param_1[0x5a] = param_2;
  if (param_2 != 0) {
    puStack_1c = &LAB_004875f1;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_004713c0(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return;
}

