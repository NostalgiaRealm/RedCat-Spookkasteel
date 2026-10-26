/*
 * FUN_004ebb88 at 004ebb88
 * undefined __register FUN_004ebb88(int * param_1, char param_2, int * param_3)
 * Address ranges: 004ebb88-004ebc78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ebb88(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  undefined1 extraout_DL;
  undefined1 uVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStackY_40;
  undefined1 *puStackY_3c;
  undefined1 *puStackY_38;
  undefined4 in_stack_ffffffcc;
  undefined4 in_stack_ffffffd0;
  undefined4 *local_20;
  int local_1c;
  undefined4 *local_18;
  uint *local_14;
  int *local_10;
  undefined4 uStack_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  uStack_c = 0;
  local_10 = (int *)0x0;
  local_14 = (uint *)0x0;
  local_18 = (undefined4 *)0x0;
  local_1c = 0;
  local_20 = (undefined4 *)0x0;
  uVar3 = 0;
  if (param_2 != '\0') {
    puStackY_38 = (undefined1 *)0x4ebba6;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffcc,in_stack_ffffffd0);
    param_3 = extraout_ECX;
    uVar3 = extraout_DL;
  }
  uStack_c = CONCAT13(uVar3,(undefined3)uStack_c);
  puStackY_3c = &LAB_004ebc79;
  uStackY_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_40;
  puStackY_38 = &stack0xfffffffc;
  local_10 = param_3;
  local_8 = param_1;
  FUN_004cee4c(param_1,'\0',(int)param_3);
  piVar1 = FUN_00482744((int *)&PTR_FUN_0047d7a0,'\x01',(int *)0x0);
  local_8[0x14] = (int)piVar1;
  bVar4 = SCARRY4(DAT_0057467c,1);
  DAT_0057467c = DAT_0057467c + 1;
  if (bVar4) {
    thunk_FUN_00402874((uint)piVar1);
  }
  FUN_00409bd8(DAT_0057467c,(int *)&local_18);
  FUN_0040407c((int *)&local_14,(undefined4 *)&DAT_004ebca8,local_18);
  FUN_004839cc((int *)local_8[0x14],local_14);
  FUN_00409bd8(DAT_0057467c,(int *)&local_20);
  FUN_0040407c(&local_1c,(undefined4 *)&LAB_004ebcb8,local_20);
  (**(code **)(*(int *)local_8[0x14] + 0x18))((int *)local_8[0x14],local_1c);
  iVar2 = FUN_00403224(local_10,(int)&PTR_FUN_004ea32c);
  FUN_004839c4((int *)local_8[0x14],*(undefined4 **)(iVar2 + 0x28));
  *in_FS_OFFSET = uStackY_40;
  puStackY_38 = &LAB_004ebc80;
  puStackY_3c = (undefined1 *)0x4ebc78;
  FUN_00403dd4((int *)&local_20,4);
  return;
}

