/*
 * FUN_00435184 at 00435184
 * undefined __register FUN_00435184(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00435184-00435249;00435251-0043526d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00435184(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puVar4 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xfffffffc;
  puVar8 = &stack0xfffffffc;
  if ((((char)param_1[0x51] != '\0') && ((char)param_1[0x5f] != '\0')) && (param_1[0x52] != 0)) {
    puStack_1c = (undefined1 *)0x4351c8;
    (**(code **)(*(int *)param_1[0x52] + 0x2c))((int *)param_1[0x52],0);
  }
  puStack_20 = (undefined1 *)0x4351ce;
  puStack_1c = &stack0xfffffffc;
  uVar2 = FUN_00435130();
  puVar1 = puStack_1c;
  if ((char)uVar2 != '\0') {
    puStack_1c = (undefined1 *)0x4351e1;
    (**(code **)(*param_1 + 0x84))(param_1,param_3);
    puStack_1c = (undefined1 *)0x4351ed;
    piVar3 = (int *)FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX);
    puStack_20 = &LAB_0043524a;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    FUN_00434fdc(1,extraout_EDX_00,extraout_ECX_00,(int)&stack0xfffffffc);
    FUN_00434fdc(2,extraout_EDX_01,puVar4,(int)&stack0xfffffffc);
    FUN_00434fdc(3,extraout_EDX_02,puVar5,(int)&stack0xfffffffc);
    FUN_00434fdc(4,extraout_EDX_03,puVar6,(int)&stack0xfffffffc);
    FUN_00434fdc(5,extraout_EDX_04,puVar7,(int)&stack0xfffffffc);
    FUN_00434fdc(0,extraout_EDX_05,puVar8,(int)&stack0xfffffffc);
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x435251;
    puStack_20 = (undefined1 *)0x435249;
    FUN_00403094(piVar3);
    return;
  }
  if ((char)param_1[0x5a] != '\0') {
    puStack_1c = (undefined1 *)0x435269;
    FUN_00403270(param_1,extraout_EDX,puVar1);
  }
  return;
}

