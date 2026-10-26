/*
 * FUN_0046ce54 at 0046ce54
 * undefined __register FUN_0046ce54(int param_1, int * param_2)
 * Address ranges: 0046ce54-0046cf02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046ce54(int param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined2 local_14;
  undefined2 local_12;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_20 = (undefined1 *)0x46ce70;
  local_8 = param_2;
  local_c = (int *)(**(code **)(**(int **)(param_1 + 0x28) + 0x210))
                             (*(int **)(param_1 + 0x28),param_1,1);
  puStack_24 = &LAB_0046cf03;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if ((*(char *)(param_1 + 0x34) == '\x11') || (*(char *)(param_1 + 0x34) == '\x15')) {
    local_14 = 1;
    local_12 = 0x100;
    local_10 = 0;
    puStack_20 = &stack0xfffffffc;
    (**(code **)(*local_c + 8))(local_c,&local_14,8);
    (**(code **)(*local_8 + 0x54))(local_8,local_c);
    local_10 = FUN_004147b0(local_c);
    local_10 = local_10 + -8;
    FUN_004147c0(local_c,0);
    (**(code **)(*local_c + 8))(local_c,&local_14,8);
  }
  else {
    puStack_20 = &stack0xfffffffc;
    (**(code **)(*local_8 + 0x54))(local_8,local_c);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0046cf0a;
  puStack_24 = (undefined1 *)0x46cf02;
  FUN_00403094(local_c);
  return;
}

