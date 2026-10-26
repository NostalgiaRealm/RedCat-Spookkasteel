/*
 * FUN_0056be70 at 0056be70
 * undefined __register FUN_0056be70(int * param_1, int * param_2)
 * Address ranges: 0056be70-0056bf57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056be70(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int *piVar3;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_20;
  char *local_1c;
  undefined1 local_18;
  int local_14;
  undefined1 local_10;
  int *local_c;
  int *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_20 = 0;
  puStack_28 = &LAB_0056bf58;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_c = param_2;
  local_8 = param_1;
  if (param_1 == (int *)0x0) {
    puStack_24 = &stack0xfffffffc;
    FUN_00406a48(&PTR_DAT_0056be68,param_2);
  }
  else {
    uVar1 = FUN_0040320c(param_1,(int)&PTR_FUN_0045b3e0);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_0040320c(local_8,(int)&DAT_00408ac4);
      if ((char)uVar1 == '\0') {
        local_1c = "TranslateMenuException: ";
        local_18 = 0xb;
        piVar3 = local_c;
        FUN_00406a48(&PTR_DAT_0056be68,&local_20);
        local_14 = local_20;
        local_10 = 0xb;
        FUN_0040a894((byte *)"%s: %s",&local_1c,1,piVar3);
      }
      else {
        FUN_00403db0(local_c);
        iVar2 = FUN_00403224(local_8,(int)&DAT_00408ac4);
        FUN_00403e04(local_c,*(undefined4 **)(iVar2 + 4));
      }
    }
    else {
      iVar2 = FUN_00403224(local_8,(int)&PTR_FUN_0045b3e0);
      FUN_00403e04(local_c,*(undefined4 **)(iVar2 + 0x18));
    }
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0056bf5f;
  puStack_28 = (undefined1 *)0x56bf57;
  FUN_00403db0(&local_20);
  return;
}

