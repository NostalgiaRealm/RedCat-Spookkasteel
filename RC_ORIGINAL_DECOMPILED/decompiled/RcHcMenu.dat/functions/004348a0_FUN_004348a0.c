/*
 * FUN_004348a0 at 004348a0
 * undefined __register FUN_004348a0(int * param_1, char param_2, int * param_3)
 * Address ranges: 004348a0-00434991
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004348a0(int *param_1,char param_2,int *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_30;
  undefined1 *puStackY_2c;
  undefined1 *puStackY_28;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  undefined4 *local_c;
  undefined1 local_5;
  
  local_c = (undefined4 *)0x0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStackY_28 = (undefined1 *)0x4348b9;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puStackY_2c = &LAB_00434992;
  uStackY_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_30;
  puStackY_28 = &stack0xfffffffc;
  FUN_00431918(param_1,'\0',param_3);
  puVar1 = FUN_004484b8();
  param_1[0x57] = (int)puVar1;
  piVar2 = FUN_0041c16c((int *)&PTR_FUN_0041a6d0,'\x01',extraout_ECX_00);
  param_1[0x4c] = (int)piVar2;
  FUN_0041c318(piVar2,param_1[0x18]);
  *(undefined1 *)(param_1 + 0x58) = 1;
  param_1[0x5c] = -1;
  *(undefined1 *)(param_1 + 0x55) = 3;
  if (*(short *)(PTR_DAT_0057261c + 4) == 0x11) {
    FUN_00403db0(param_1 + 0x56);
  }
  else {
    FUN_0044f570(*(int *)PTR_DAT_005725f0,(int *)&local_c,extraout_ECX_01);
    FUN_00403e04(param_1 + 0x56,local_c);
  }
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined1 *)((int)param_1 + 0x122) = 0xf;
  *(undefined1 *)((int)param_1 + 0x123) = 2;
  *(undefined1 *)(param_1 + 0x49) = 1;
  param_1[0x4a] = 1;
  *in_FS_OFFSET = uStackY_30;
  puStackY_28 = &LAB_00434999;
  puStackY_2c = (undefined1 *)0x434991;
  FUN_00403db0((int *)&local_c);
  return;
}

