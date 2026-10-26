/*
 * FUN_0053cb6c at 0053cb6c
 * undefined __register FUN_0053cb6c(int * param_1, char param_2)
 * Address ranges: 0053cb6c-0053cc8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 17 for TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 17 for
   TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_0053cb6c(int *param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  char local_9;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_18 = (int *)0x0;
  local_10 = (int *)0x0;
  local_14 = (int *)0x0;
  puStack_20 = &LAB_0053cc8f;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_9 = param_2;
  local_8 = param_1;
  local_10 = (int *)FUN_0049206c((int *)param_1[7]);
  local_14 = (int *)FUN_0049206c((int *)local_8[7]);
  cVar1 = (**(code **)(*(int *)local_8[0x22] + 0x50))();
  if (cVar1 == '\0') {
    (**(code **)(*(int *)local_8[0x22] + 0x48))();
    FUN_004d6cb4((int *)local_8[0x22],local_10);
    (**(code **)(*(int *)local_8[0x22] + 0x50))();
  }
  else {
    FUN_004d6cb4((int *)local_8[0x22],local_10);
    (**(code **)(*(int *)local_8[0x22] + 0x48))();
  }
  local_18 = FUN_00418f00((int *)&PTR_FUN_00544284,'\x01',(int *)0x0);
  piVar2 = (int *)FUN_00549b80((int)local_8);
  FUN_00493768(local_14,piVar2);
  piVar2 = local_18;
  cVar1 = FUN_004d4488((int *)local_8[0xd],local_14,local_9,local_18);
  if (cVar1 == '\0') {
    FUN_0053ce30(local_8,local_14,'\0');
  }
  else {
    FUN_0053ce30(local_8,local_10,'\0');
  }
  *in_FS_OFFSET = piVar2;
  puStack_20 = &LAB_0053cc96;
  uStack_24 = 0x53cc7e;
  FUN_00403094(local_18);
  uStack_24 = 0x53cc86;
  FUN_00403094(local_10);
  uStack_24 = 0x53cc8e;
  FUN_00403094(local_14);
  return;
}

