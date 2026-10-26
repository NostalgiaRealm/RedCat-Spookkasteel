/*
 * FUN_00521b14 at 00521b14
 * undefined __register FUN_00521b14(int * param_1, int * param_2, LPRECT param_3, int param_4)
 * Address ranges: 00521b14-00521c89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x51bed8 slot 47 for TDaviCustomGrid2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x51bed8 slot 47 for
   TDaviCustomGrid2. Original bytes unchanged; names and types still inferred. */

void FUN_00521b14(int *param_1,int *param_2,LPRECT param_3,int param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  byte local_11;
  LPRECT local_10;
  int *local_c;
  int *local_8;
  
  local_11 = 4;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_0041c318((int *)param_2[5],param_1[0x84]);
  FUN_0041ce68((int)local_c);
  if (*(char *)(param_4 + 0x25) == '\x01') {
    local_11 = 1;
  }
  if (*(char *)(param_4 + 0x25) == '\x02') {
    local_11 = 3;
    FUN_0041bb48((int *)local_c[3],local_8[0x87],extraout_ECX);
  }
  local_2c = local_8[0x84];
  local_28 = local_8[0x85];
  local_24 = local_8[0x86];
  local_20 = local_8[0x87];
  local_1c = local_8[0x88];
  FUN_004ab470(local_c,&local_10->left,(int)&local_2c,local_11);
  if (*(char *)(param_4 + 0x25) == '\x01') {
    OffsetRect(local_10,1,1);
  }
  if (*(char *)(param_4 + 0x25) == '\x02') {
    OffsetRect(local_10,1,1);
  }
  if ((*(char *)(param_4 + 7) == '\0') && ((*(byte *)((int)local_8 + 0x20f) & 1) != 0)) {
    FUN_00522d50(local_8,local_c,&local_10->left,-1,'\x02');
  }
  else {
    iVar1 = FUN_0051c878(param_4);
    if ((iVar1 != -1) && ((*(byte *)((int)local_8 + 0x20f) & 2) != 0)) {
      if ((*(byte *)((int)local_8 + 0x20f) & 4) == 0) {
        local_18 = -1;
      }
      else {
        local_18 = FUN_0051c878(param_4);
      }
      if (*(char *)(param_4 + 0x24) == '\0') {
        FUN_00522d50(local_8,local_c,&local_10->left,local_18,'\0');
      }
      else {
        FUN_00522d50(local_8,local_c,&local_10->left,local_18,'\x01');
      }
    }
  }
  return;
}

