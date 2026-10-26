/*
 * FUN_00480828 at 00480828
 * undefined __register FUN_00480828(int * param_1, char * param_2)
 * Address ranges: 00480828-00480928;00480985-004809c2;004809d4-004809fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00480828(int *param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *local_2c;
  undefined1 *puStack_28;
  undefined *local_24;
  uint *local_20;
  char *local_1c;
  
  puStack_28 = &stack0xfffffffc;
  iVar2 = 5;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_20 = (uint *)&LAB_004809fc;
  local_24 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_2c = &LAB_004809c3;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_1c = param_2;
  if (*(int *)(param_2 + 0x4c) == 0) {
    if (*(char *)((int)param_1 + 0x46) != '\0') {
      puStack_34 = (undefined1 *)0x4808d4;
      puStack_28 = &stack0xfffffffc;
      piVar1 = (int *)FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',0);
      puStack_38 = &LAB_00480929;
      uStack_3c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_3c;
      puStack_34 = &stack0xfffffffc;
      FUN_00403fe0((int *)&local_24,local_1c,0x20);
      FUN_00480bdc((int)param_1,local_24,piVar1);
      FUN_00413a08(piVar1,"USER NAME",(int *)&stack0xfffffff0);
      *in_FS_OFFSET = uStack_3c;
      puStack_34 = &DAT_00480930;
      puStack_38 = (undefined1 *)0x480928;
      FUN_00403094(piVar1);
      return;
    }
    puStack_34 = (undefined1 *)0x480889;
    puStack_28 = &stack0xfffffffc;
    FUN_00403fe0((int *)&local_20,param_2,0x20);
    puStack_34 = (undefined1 *)0x480894;
    piVar1 = (int *)FUN_004819c8(param_1,local_20);
    if (*(char *)((int)piVar1 + 0x69) == '\0') {
      *(int *)(local_1c + 0x4c) = piVar1[0x1c];
      local_1c[0x48] = -1;
      local_1c[0x49] = -1;
      local_1c[0x4a] = -1;
      local_1c[0x4b] = -1;
    }
    else {
      puStack_34 = (undefined1 *)0x4808bc;
      FUN_00480798(param_1,piVar1);
    }
  }
  else {
    puStack_34 = (undefined1 *)0x480995;
    FUN_00403fe0((int *)&local_2c,param_2,0x20);
    puStack_34 = (undefined1 *)0x4809a0;
    piVar1 = (int *)FUN_00480ac0((int)param_1,local_2c);
    if ((piVar1 != (int *)0x0) && (*(int *)(local_1c + 0x4c) == piVar1[0x1c])) {
      puStack_34 = (undefined1 *)0x4809b9;
      FUN_00480798(param_1,piVar1);
    }
  }
  *in_FS_OFFSET = uStack_30;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_00480a03;
  local_20 = (uint *)0x4809ee;
  FUN_00403dd4((int *)&local_2c,4);
  local_20 = (uint *)0x4809fb;
  FUN_00403dd4((int *)&stack0xffffffec,2);
  return;
}

