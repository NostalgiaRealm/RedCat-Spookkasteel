/*
 * FUN_00526ec4 at 00526ec4
 * undefined __register FUN_00526ec4(int * param_1, int param_2)
 * Address ranges: 00526ec4-00526f62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x525a70 slot 1 for TAppObjGridColumn. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x525a70 slot 1 for
   TAppObjGridColumn. Original bytes unchanged; names and types still inferred. */

void FUN_00526ec4(int *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  int local_2c;
  byte local_28 [28];
  int local_c;
  int *local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_2c = 0;
  puStack_34 = &LAB_00526f63;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_c = param_2;
  local_8 = param_1;
  FUN_0051d1dc((int)param_1,param_2);
  cVar1 = FUN_00516c48(local_c,"OwnerDraw");
  if (cVar1 != '\0') {
    bVar2 = FUN_00516b54(local_c,"OwnerDraw");
    FUN_00526d38(local_8,bVar2);
  }
  cVar1 = FUN_00516c48(local_c,"AppPropRef");
  if (cVar1 != '\0') {
    FUN_00516a8c(local_c,"AppPropRef",&local_2c);
    FUN_0048d438(local_2c,local_28);
    FUN_00526d84(local_8,local_28);
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00526f6a;
  puStack_34 = (undefined1 *)0x526f62;
  FUN_00403db0(&local_2c);
  return;
}

