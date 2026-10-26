/*
 * FUN_00472230 at 00472230
 * undefined __register FUN_00472230(char param_1, double * param_2, undefined4 param_3)
 * Address ranges: 00472230-0047228f;004722a4-004722b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00472230(char param_1,double *param_2,undefined4 param_3)

{
  double dVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_c;
  undefined4 uStack_8;
  
  puStack_2c = &stack0xfffffffc;
  local_c = *(undefined4 *)param_2;
  uStack_8 = *(undefined4 *)((int)param_2 + 4);
  dVar1 = *param_2;
  if (param_1 == '\t') {
    local_1c = 0;
    local_18 = local_c;
  }
  else if (param_1 == '\n') {
    local_18 = 0xa955a;
    local_1c = local_c;
  }
  else {
    puStack_30 = &LAB_00472290;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    FUN_0040ac68(&local_1c,param_2,param_3,(longlong)ROUND(dVar1));
    *in_FS_OFFSET = uStack_34;
  }
  puStack_2c = (undefined1 *)0x4722ac;
  FUN_0040ac38();
  return;
}

