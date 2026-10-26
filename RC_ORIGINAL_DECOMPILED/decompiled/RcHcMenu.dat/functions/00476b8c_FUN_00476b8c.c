/*
 * FUN_00476b8c at 00476b8c
 * undefined __register FUN_00476b8c(int param_1, undefined * param_2)
 * Address ranges: 00476b8c-00476ccd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00476b8c(int param_1,undefined *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *in_FS_OFFSET;
  int in_stack_ffffffbc;
  int iStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  int local_28;
  undefined1 local_24;
  byte *local_20;
  int local_1c [2];
  undefined *local_14;
  int local_10;
  int local_c;
  undefined *local_8;
  
  local_20 = (byte *)0x0;
  puStack_38 = (undefined1 *)0x476ba7;
  local_8 = param_2;
  FUN_004041e4((int)param_2);
  puStack_38 = (undefined1 *)0x476bb5;
  FUN_00404780((int)local_1c,(int)&DAT_00474c18);
  puStack_3c = &LAB_00476cce;
  iStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_40;
  piVar3 = (int *)0x0;
  if ((*(byte *)(param_1 + 0x2d) & 0x10) == 0) {
    puStack_38 = &stack0xfffffffc;
    if ((*(byte *)(param_1 + 0x2d) & 8) != 0) {
      in_stack_ffffffbc = 0x476be8;
      puStack_38 = &stack0xfffffffc;
      iVar2 = FUN_00471d88(*(int *)(param_1 + 4));
      if (-1 < iVar2 + -1) {
        local_c = 0;
        local_10 = iVar2;
        do {
          iVar2 = FUN_00468730(*(int *)(*(int *)(param_1 + 4) + 0x24),local_c);
          in_stack_ffffffbc = 0x476c16;
          cVar1 = FUN_00475928(*(int *)(iVar2 + 0x84),local_1c);
          if (cVar1 != '\0') {
            in_stack_ffffffbc = 0x476c25;
            iVar2 = FUN_00409838(local_8,local_14);
            if (iVar2 == 0) goto LAB_00476ca2;
          }
          local_c = local_c + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
    }
  }
  else {
    in_stack_ffffffbc = 0x476bd6;
    puStack_38 = &stack0xfffffffc;
    piVar3 = (int *)FUN_00472080(*(int *)(param_1 + 4),*(undefined **)(param_1 + 0x44));
  }
  if (piVar3 == (int *)0x0) {
    in_stack_ffffffbc = 0x476c44;
    piVar3 = (int *)FUN_00472080(*(int *)(param_1 + 4),local_8);
  }
  if (((piVar3 != (int *)0x0) && (*(char *)((int)piVar3 + 0x36) == '\x01')) &&
     ((*(byte *)(param_1 + 0x2d) & 2) != 0)) {
    in_stack_ffffffbc = 0;
    FUN_00406a48((undefined4 *)PTR_PTR_005722dc,(int *)&local_20);
    local_28 = piVar3[0xb];
    local_24 = 0xb;
    FUN_00466e30(local_20,&local_28,0,in_stack_ffffffbc);
  }
  if ((((*(byte *)(param_1 + 0x2d) & 0x20) != 0) && (piVar3 != (int *)0x0)) &&
     (*(int *)(param_1 + 0x48) != 0)) {
    iVar2 = (**(code **)(*piVar3 + 0x74))();
    FUN_0041298c(*(int *)(param_1 + 0x48),iVar2 - 1,'\x01');
  }
LAB_00476ca2:
  *in_FS_OFFSET = in_stack_ffffffbc;
  puStack_3c = &LAB_00476cd5;
  iStack_40 = 0x476cb7;
  FUN_00403db0((int *)&local_20);
  iStack_40 = 0x476cc5;
  FUN_0040484c((int)local_1c,(int)&DAT_00474c18);
  iStack_40 = 0x476ccd;
  FUN_00403db0((int *)&local_8);
  return;
}

