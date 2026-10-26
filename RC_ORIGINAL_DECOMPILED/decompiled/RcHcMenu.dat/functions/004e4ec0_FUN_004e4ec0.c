/*
 * FUN_004e4ec0 at 004e4ec0
 * undefined __register FUN_004e4ec0(int * param_1)
 * Address ranges: 004e4ec0-004e5067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 18 for TAppObjCachedMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 18 for
   TAppObjCachedMemList. Original bytes unchanged; names and types still inferred. */

void FUN_004e4ec0(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_130;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  int local_118;
  int local_114;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_114 = 0;
  local_118 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_120 = &LAB_004e5068;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0x22] != param_1[0x23]) {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    pcStack_130 = " Cancel-operation not at edit/insert-row";
    FUN_004040f0(&local_c,3);
    FUN_00403d94(local_c);
    puVar1 = puStack_11c;
  }
  puStack_11c = puVar1;
  if ((char)local_8[0x10] == '\0') {
    if ((char)local_8[4] == '\0') {
      FUN_004e4180(local_8,local_8[0x22]);
    }
  }
  else if ((char)local_8[0x10] == '\x01') {
    piVar3 = (int *)FUN_004e25c4((int *)local_8[0x20],local_8[0x22]);
    FUN_00493768(piVar3,(int *)local_8[0xc]);
    cVar2 = FUN_004e257c((int *)local_8[0x20],local_8[0x22]);
    if (cVar2 != '\x03') {
      FUN_004e25a0((int *)local_8[0x20],local_8[0x22],*(undefined1 *)((int)local_8 + 0x91));
    }
  }
  else {
    FUN_00402fe0(*local_8,local_110);
    FUN_00403fd4(&local_118,local_110);
    FUN_004040f0(&local_114,3);
    FUN_00403d94(local_114);
  }
  FUN_0054a2b0(local_8);
  *in_FS_OFFSET = pcStack_130;
  FUN_00403dd4(&local_118,2);
  FUN_00403dd4(&local_10,2);
  return;
}

