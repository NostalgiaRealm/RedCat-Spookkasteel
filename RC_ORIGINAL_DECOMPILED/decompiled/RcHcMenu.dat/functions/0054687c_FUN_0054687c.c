/*
 * FUN_0054687c at 0054687c
 * undefined __register FUN_0054687c(int * param_1)
 * Address ranges: 0054687c-00546946
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 16 for TAppObjQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 16 for
   TAppObjQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_0054687c(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar3 = param_1 + 0x23;
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + 1;
  local_8 = param_1;
  if (SCARRY4(iVar1,1)) {
    puStack_14 = (undefined1 *)0x546896;
    thunk_FUN_00402874((uint)param_1);
  }
  local_10 = (int *)0x0;
  local_c = (int *)0x0;
  puStack_18 = &LAB_00546947;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  local_10 = (int *)FUN_0054843c(local_8);
  cVar2 = FUN_00547c54(local_8);
  if (cVar2 == '\0') {
    FUN_00547e4c(local_8);
  }
  local_c = (int *)FUN_0049206c((int *)local_8[7]);
  piVar3 = (int *)FUN_00549b80((int)local_8);
  FUN_00493768(local_c,piVar3);
  FUN_00548598(local_8,(int)local_10);
  FUN_00403094(local_10);
  local_10 = (int *)0x0;
  piVar3 = (int *)FUN_00549b80((int)local_8);
  FUN_004d4718((int *)local_8[0xd],piVar3,'\0');
  FUN_00548cf4(local_8,local_c,0);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0054694e;
  puStack_18 = (undefined1 *)0x54693e;
  FUN_00403094(local_10);
  puStack_18 = (undefined1 *)0x546946;
  FUN_00403094(local_c);
  return;
}

