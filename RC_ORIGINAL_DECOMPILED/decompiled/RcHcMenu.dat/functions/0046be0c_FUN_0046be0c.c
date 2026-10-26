/*
 * FUN_0046be0c at 0046be0c
 * undefined __register FUN_0046be0c(int * param_1, int * param_2, char param_3)
 * Address ranges: 0046be0c-0046beb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464134 slot 33 for TDateTimeField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464134 slot 33 for
   TDateTimeField. Original bytes unchanged; names and types still inferred. */

void FUN_0046be0c(int *param_1,int *param_2,char param_3)

{
  char cVar1;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 local_14 [12];
  byte *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  puStack_28 = &LAB_0046beb7;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  cVar1 = FUN_0046bec8(param_1,(int)local_14);
  if (cVar1 == '\0') {
    FUN_00403db0(param_2);
  }
  else {
    if ((param_3 == '\0') || (param_1[0x34] == 0)) {
      if ((char)param_1[0xd] == '\t') {
        FUN_00403e48((int *)&local_8,*(int *)PTR_DAT_00572208);
        puVar2 = extraout_ECX_01;
      }
      else {
        puVar2 = extraout_ECX;
        if ((char)param_1[0xd] == '\n') {
          FUN_00403e48((int *)&local_8,*(int *)PTR_DAT_005723a0);
          puVar2 = extraout_ECX_02;
        }
      }
    }
    else {
      FUN_00403e48((int *)&local_8,param_1[0x34]);
      puVar2 = extraout_ECX_00;
    }
    FUN_0040bca4(param_2,local_8,puVar2);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0046bebe;
  puStack_28 = (undefined1 *)0x46beb6;
  FUN_00403db0((int *)&local_8);
  return;
}

