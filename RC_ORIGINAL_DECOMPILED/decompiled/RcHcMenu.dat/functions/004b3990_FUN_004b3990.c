/*
 * FUN_004b3990 at 004b3990
 * undefined __register FUN_004b3990(undefined4 param_1, int * param_2, undefined4 param_3, int * param_4)
 * Address ranges: 004b3990-004b3adc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b3990(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  int local_38;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  undefined4 *local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 *local_10;
  int *local_c;
  undefined4 local_8;
  
  iVar3 = 6;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  LOCK();
  UNLOCK();
  local_10 = (undefined4 *)0x0;
  local_18 = (undefined1 *)0x4b39b5;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4(0);
  local_1c = &LAB_004b3add;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  local_24 = (undefined *)0x4b39cb;
  local_18 = &stack0xfffffffc;
  iVar3 = (**(code **)(*local_c + 0x14))();
  if (0 < iVar3) {
    local_24 = (undefined *)0x4b39e0;
    (**(code **)(*local_c + 0xc))(local_c,0,&local_20);
    local_24 = (undefined *)0x4b39eb;
    local_18 = (undefined1 *)(**(code **)(*param_4 + 0x34))(param_4,local_20);
    local_24 = (undefined *)0x4b39f6;
    iVar3 = (**(code **)(*local_c + 0x14))();
    if (1 < iVar3) {
      local_24 = (undefined *)0x4b3a09;
      (**(code **)(*local_c + 0xc))(local_c,1,&local_28);
      local_24 = (undefined *)0x4b3a17;
      FUN_0040407c((int *)&local_24,local_10,local_28);
      puVar1 = local_24;
      local_24 = (undefined *)0x4b3a22;
      (**(code **)(*param_4 + 0x34))(param_4,puVar1);
    }
    local_24 = (undefined *)0x4b3a2a;
    iVar3 = (**(code **)(*local_c + 0x14))();
    if (2 < iVar3) {
      local_24 = (undefined *)0x4b3a3b;
      iVar3 = (**(code **)(*local_c + 0x14))();
      uVar2 = iVar3 - 1;
      if (SBORROW4(iVar3,1)) {
        local_24 = (undefined *)0x4b3a45;
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      if (1 < (int)uVar2) {
        local_1c = (undefined1 *)(uVar2 - 1);
        iVar3 = 2;
        do {
          local_24 = (undefined *)0x4b3a63;
          (**(code **)(*param_4 + 0xc))(param_4,local_18,&local_30);
          local_24 = (undefined *)0x4b3a73;
          FUN_0040407c(&local_2c,(undefined4 *)&DAT_004b3af4,local_30);
          local_24 = (undefined *)0x4b3a81;
          (**(code **)(*param_4 + 0x20))(param_4,local_18,local_2c);
          local_24 = &DAT_004b3b00;
          local_28 = local_10;
          local_2c = 0x4b3a97;
          (**(code **)(*local_c + 0xc))(local_c,iVar3,&local_38);
          local_2c = local_38;
          local_30 = (undefined4 *)0x4b3aa7;
          FUN_004040f0(&local_34,3);
          local_30 = (undefined4 *)0x4b3ab2;
          (**(code **)(*param_4 + 0x34))(param_4,local_34);
          iVar3 = iVar3 + 1;
          local_1c = (undefined1 *)((int)local_1c + -1);
        } while (local_1c != (undefined1 *)0x0);
      }
    }
  }
  *in_FS_OFFSET = local_20;
  local_18 = &LAB_004b3ae4;
  local_1c = (undefined1 *)0x4b3ad4;
  FUN_00403dd4(&local_38,7);
  local_1c = (undefined1 *)0x4b3adc;
  FUN_00403db0((int *)&local_10);
  return;
}

