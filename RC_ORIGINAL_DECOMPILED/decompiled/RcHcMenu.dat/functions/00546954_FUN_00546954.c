/*
 * FUN_00546954 at 00546954
 * undefined __register FUN_00546954(int * param_1, char param_2)
 * Address ranges: 00546954-00546a44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 17 for TAppObjQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 17 for
   TAppObjQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_00546954(int *param_1,char param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  char local_9;
  int *local_8;
  
  piVar3 = param_1 + 0x23;
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + 1;
  local_9 = param_2;
  local_8 = param_1;
  if (SCARRY4(iVar1,1)) {
    puStack_1c = (undefined1 *)0x546971;
    thunk_FUN_00402874((uint)param_1);
  }
  local_14 = (int *)0x0;
  local_10 = (int *)0x0;
  local_18 = (int *)0x0;
  puStack_20 = &LAB_00546a45;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  local_14 = (int *)FUN_0054843c(local_8);
  cVar2 = FUN_00547c54(local_8);
  if (cVar2 == '\0') {
    FUN_00547e4c(local_8);
  }
  local_10 = (int *)FUN_0049206c((int *)local_8[7]);
  piVar3 = (int *)FUN_00549b80((int)local_8);
  FUN_00493768(local_10,piVar3);
  FUN_00548598(local_8,(int)local_14);
  FUN_00403094(local_14);
  local_14 = (int *)0x0;
  piVar3 = FUN_00418f00((int *)&PTR_FUN_00544284,'\x01',(int *)0x0);
  local_18 = piVar3;
  piVar4 = (int *)FUN_00549b80((int)local_8);
  FUN_004d4488((int *)local_8[0xd],piVar4,local_9,piVar3);
  FUN_00548cf4(local_8,local_10,0);
  *in_FS_OFFSET = piVar3;
  puStack_20 = &LAB_00546a4c;
  uStack_24 = 0x546a34;
  FUN_00403094(local_18);
  uStack_24 = 0x546a3c;
  FUN_00403094(local_14);
  uStack_24 = 0x546a44;
  FUN_00403094(local_10);
  return;
}

