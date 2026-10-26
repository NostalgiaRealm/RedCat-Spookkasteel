/*
 * FUN_005294d0 at 005294d0
 * undefined __register FUN_005294d0(int * param_1, int * param_2, LONG * param_3, int * param_4)
 * Address ranges: 005294d0-0052958d;005295aa-005295b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x525f60 slot 48 for TAppObjGrid2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x525f60 slot 48 for
   TAppObjGrid2. Original bytes unchanged; names and types still inferred. */

void FUN_005294d0(int *param_1,int *param_2,LONG *param_3,int *param_4)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_1c;
  char local_11;
  LONG *local_10;
  int *local_c;
  int *local_8;
  
  puStack_2c = &stack0xfffffffc;
  puStack_30 = &LAB_0052958e;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = FUN_00403224(param_4,(int)&PTR_FUN_00525a70);
  local_1c = 0;
  if (local_8[0xa4] != 0) {
    local_1c = FUN_00549b64(local_8[0xa4]);
  }
  local_11 = '\x01';
  if (((*(char *)(iVar1 + 0x40) != '\0') && (local_1c != 0)) &&
     (*(short *)((int)local_8 + 0x2ba) != 0)) {
    local_11 = '\0';
    (*(code *)local_8[0xae])(local_8[0xaf],local_8,local_c,&local_11,iVar1,local_1c,local_10);
  }
  if (local_11 != '\0') {
    FUN_00521c8c(local_8,local_c,local_10,(int)param_4);
  }
  *in_FS_OFFSET = uStack_34;
  return;
}

