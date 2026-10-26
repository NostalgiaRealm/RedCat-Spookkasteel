/*
 * FUN_00526dd0 at 00526dd0
 * undefined __register FUN_00526dd0(undefined4 param_1, int param_2, char * param_3)
 * Address ranges: 00526dd0-00526e65;00526e76-00526e8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x525a70 slot 0 for TAppObjGridColumn. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x525a70 slot 0 for
   TAppObjGridColumn. Original bytes unchanged; names and types still inferred. */

void FUN_00526dd0(undefined4 param_1,int param_2,char *param_3)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 local_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  int local_30;
  byte local_2c [28];
  char *local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_40 = &stack0xfffffffc;
  local_30 = 0;
  puStack_44 = &LAB_00526e8c;
  local_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_48;
  puStack_4c = (undefined1 *)0x526e03;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_0051d040(param_1,param_2,param_3);
  puStack_4c = (undefined1 *)0x526e10;
  cVar1 = FUN_00516c48(local_c,"OwnerDraw");
  if (cVar1 != '\0') {
    puStack_4c = (undefined1 *)0x526e21;
    cVar1 = FUN_00516c48(local_c,"AppPropRef");
    if (cVar1 != '\0') goto LAB_00526e2b;
  }
  *local_10 = '\0';
LAB_00526e2b:
  if (*local_10 != '\0') {
    puStack_50 = &LAB_00526e66;
    uStack_54 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_54;
    puStack_4c = &stack0xfffffffc;
    FUN_00516a8c(local_c,"AppPropRef",&local_30);
    FUN_0048d438(local_30,local_2c);
    *in_FS_OFFSET = uStack_54;
  }
  *in_FS_OFFSET = local_48;
  puStack_40 = &LAB_00526e93;
  puStack_44 = (undefined1 *)0x526e8b;
  FUN_00403db0(&local_30);
  return;
}

