/*
 * FUN_0053ce30 at 0053ce30
 * undefined __register FUN_0053ce30(int * param_1, int * param_2, char param_3)
 * Address ranges: 0053ce30-0053cf08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053ce30(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 local_12;
  char local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puVar4 = &stack0xfffffffc;
  puStack_20 = (undefined1 *)0x53ce4a;
  local_11 = param_3;
  local_10 = param_2;
  local_8 = param_1;
  local_c = (int *)FUN_0049206c((int *)param_1[7]);
  puStack_24 = &LAB_0053cf09;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  if (local_11 == '\0') {
    puStack_20 = &stack0xfffffffc;
    FUN_0053d2c0(local_8);
  }
  FUN_0054b510((uint)local_8);
  iVar1 = (**(code **)(*local_8 + 8))();
  if (3 < iVar1) {
    local_1c = (**(code **)(*local_8 + 8))();
    FUN_004241a8();
    iVar2 = FUN_00402b48();
    uVar3 = iVar2 - 1;
    iVar1 = extraout_EDX - (uint)(iVar2 == 0);
    if (SBORROW4(extraout_EDX,(uint)(iVar2 == 0))) {
      uVar3 = thunk_FUN_00402874(uVar3);
      iVar1 = extraout_EDX_00;
    }
    if ((int)uVar3 >> 0x1f != iVar1) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    local_18 = uVar3;
    uVar3 = (**(code **)(*local_8 + 8))();
    iVar1 = uVar3 - 1;
    if (SBORROW4(uVar3,1)) {
      thunk_FUN_00402874(uVar3);
      iVar1 = extraout_EDX_01;
    }
    FUN_0053ccc8(0,iVar1,local_18,(uint)puVar4);
  }
  local_12 = FUN_0053c6e8(local_8,local_10,'\x01');
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0053cf10;
  puStack_24 = (undefined1 *)0x53cf00;
  FUN_0054b528(local_8);
  puStack_24 = (undefined1 *)0x53cf08;
  FUN_00403094(local_c);
  return;
}

