/*
 * FUN_00566910 at 00566910
 * undefined __register FUN_00566910(int param_1, int * param_2)
 * Address ranges: 00566910-005669d9;005669e1-00566c36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00566910(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 *unaff_EBX;
  int *in_FS_OFFSET;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  int iStack_38;
  undefined1 *puStack_34;
  undefined1 *local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined *local_20;
  undefined4 *local_1c;
  int *local_18;
  
  local_18 = (int *)&stack0xfffffffc;
  iVar2 = 5;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_1c = (undefined4 *)&LAB_00566c61;
  local_20 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_20;
  local_24 = (undefined1 *)0x566941;
  local_18 = FUN_004a3bec((int *)&PTR_FUN_0056aaf0,'\x01',0);
  local_28 = &LAB_00566c37;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_2c;
  local_30 = (undefined1 *)0x566963;
  local_24 = &stack0xfffffffc;
  (**(code **)(*local_18 + 0xc))(local_18,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc));
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x24) != 1) {
    local_30 = (undefined1 *)0x566981;
    FUN_00451854(*(undefined4 *)PTR_DAT_005723fc,(int *)&local_20);
    local_30 = (undefined1 *)0x56698c;
    FUN_00409f84(local_20,(int *)&local_1c);
    local_30 = (undefined1 *)0x566999;
    FUN_00404038((int *)&local_1c,(undefined4 *)"Settings\\static.ini");
    local_30 = (undefined1 *)0x5669a8;
    piVar1 = FUN_0045c5fc((int *)&PTR_FUN_004a4db4,'\x01',local_1c);
    puStack_34 = &LAB_005669da;
    iStack_38 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_38;
    local_30 = &stack0xfffffffc;
    FUN_0056b534((int)local_18,piVar1);
    *in_FS_OFFSET = iStack_38;
    local_30 = (undefined1 *)0x5669e1;
    puStack_34 = (undefined1 *)0x5669d9;
    FUN_00403094(piVar1);
    return;
  }
  local_30 = (undefined1 *)0x5669ff;
  FUN_00550bf8(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x120) + 0xc),local_18[2],
               (int *)&stack0xffffffec);
  puStack_34 = (undefined1 *)0x566a15;
  local_30 = unaff_EBX;
  (**(code **)(*param_2 + 4))(param_2,"KeyBinds","MoveForward");
  puStack_34 = (undefined1 *)0x566a33;
  FUN_00550bf8(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x120) + 0xc),local_18[4],
               (int *)&stack0xffffffec);
  iStack_38 = 0x566a49;
  (**(code **)(*param_2 + 4))(param_2,"KeyBinds","TurnLeft");
  iStack_38 = 0x566a67;
  FUN_00550bf8(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x120) + 0xc),local_18[5],
               (int *)&stack0xffffffec);
  (**(code **)(*param_2 + 4))(param_2,"KeyBinds","TurnRight");
  FUN_00550bf8(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x120) + 0xc),local_18[3],
               (int *)&stack0xffffffec);
  (**(code **)(*param_2 + 4))(param_2,"KeyBinds","MoveBack",unaff_EBX);
  FUN_00550bf8(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x120) + 0xc),local_18[6],
               (int *)&stack0xffffffec);
  (**(code **)(*param_2 + 4))(param_2,"KeyBinds",&DAT_00566cf8,unaff_EBX);
  FUN_00550bf8(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x120) + 0xc),local_18[8],
               (int *)&stack0xffffffec);
  (**(code **)(*param_2 + 4))(param_2,"KeyBinds",&DAT_00566d08,unaff_EBX);
  FUN_00550bf8(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x120) + 0xc),local_18[7],
               (int *)&stack0xffffffec);
  (**(code **)(*param_2 + 4))(param_2,"KeyBinds",&DAT_00566d18,unaff_EBX);
  FUN_00550bf8(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x120) + 0xc),local_18[7],
               (int *)&local_24);
  puVar4 = &DAT_00566d28;
  puVar5 = local_24;
  FUN_00550bf8(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x120) + 0xc),local_18[4],
               (int *)&local_28);
  puVar3 = local_28;
  FUN_004040f0((int *)&stack0xffffffec,3);
  (**(code **)(*param_2 + 4))(param_2,"KeyBinds","MoveLeft",unaff_EBX,puVar3,puVar4,puVar5);
  FUN_00550bf8(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x120) + 0xc),local_18[7],&local_2c);
  puVar4 = &DAT_00566d28;
  iVar2 = local_2c;
  FUN_00550bf8(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x120) + 0xc),local_18[5],
               (int *)&local_30);
  FUN_004040f0((int *)&stack0xffffffec,3);
  (**(code **)(*param_2 + 4))(param_2,"KeyBinds","MoveRight",unaff_EBX,local_30,puVar4,iVar2);
  *in_FS_OFFSET = (int)unaff_EBX;
  FUN_00403094(local_18);
  return;
}

