/*
 * FUN_0052ccd0 at 0052ccd0
 * undefined __register FUN_0052ccd0(int * param_1)
 * Address ranges: 0052ccd0-0052cef0;0052cf0e-0052cf94
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 16 for TAppObjMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 16 for
   TAppObjMemList. Original bytes unchanged; names and types still inferred. */

void FUN_0052ccd0(int *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  char *pcStack_158;
  char *pcStack_154;
  undefined1 *puStack_150;
  char *pcStack_14c;
  char *pcStack_148;
  undefined1 *puStack_144;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  int local_128;
  int local_124;
  int *local_120;
  char local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  int *local_8;
  
  puStack_138 = &stack0xfffffffc;
  local_124 = 0;
  local_128 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_13c = &LAB_0052cf95;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  puVar2 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0x22] == -0x80000000) {
    puStack_144 = (undefined1 *)0x52cd20;
    FUN_00402fe0(*param_1,local_118);
    puStack_144 = (undefined1 *)0x52cd2e;
    FUN_00403fd4(&local_18,local_118);
    puStack_144 = (undefined1 *)local_18;
    pcStack_148 = ".DoDelete:";
    pcStack_14c = " Invalid position in list";
    puStack_150 = (undefined1 *)0x52cd48;
    FUN_004040f0(&local_14,3);
    puStack_150 = (undefined1 *)0x52cd5a;
    FUN_00403d94(local_14);
    puVar2 = puStack_138;
  }
  puStack_138 = puVar2;
  puStack_150 = (undefined1 *)0x52cd77;
  FUN_004e251c((int *)local_8[0x20],local_8[0x22],&local_120);
  if (local_11c == '\x03') {
    puStack_150 = (undefined1 *)0x52cd97;
    cVar3 = FUN_004e260c((int *)local_8[0x20],local_8[0x22]);
    if (cVar3 != '\0') {
      puStack_150 = (undefined1 *)0x52cdaf;
      FUN_00403d94("Assertion failure");
    }
    puStack_150 = (undefined1 *)0x52cdcc;
    FUN_004e251c((int *)local_8[0x20],local_8[0x22],&local_120);
    puStack_150 = (undefined1 *)0x52cdd7;
    FUN_00403094(local_120);
    puStack_150 = (undefined1 *)0x52cdf0;
    FUN_004e25e8((int *)local_8[0x20],local_8[0x22],0);
  }
  else {
    puStack_150 = (undefined1 *)0x52ce09;
    local_10 = FUN_004e25c4((int *)local_8[0x20],local_8[0x22]);
    puStack_150 = (undefined1 *)0x52ce23;
    local_c = FUN_004e257c((int *)local_8[0x20],local_8[0x22]);
    puStack_150 = (undefined1 *)0x52ce3d;
    local_b = FUN_004e260c((int *)local_8[0x20],local_8[0x22]);
    puStack_150 = (undefined1 *)0x52ce51;
    FUN_004e2654((int *)local_8[0x21],&local_10);
  }
  puStack_150 = (undefined1 *)0x52ce5f;
  iVar4 = FUN_0045da14(local_8[0x21]);
  if (1 < iVar4) {
    puStack_150 = (undefined1 *)0x52ce72;
    FUN_00402fe0(*local_8,local_118);
    puStack_150 = (undefined1 *)0x52ce83;
    FUN_00403fd4(&local_128,local_118);
    puStack_150 = (undefined1 *)local_128;
    pcStack_154 = ".DoDelete: ";
    pcStack_158 = " Functionality is not supported";
    FUN_004040f0(&local_124,3);
    FUN_00403d94(local_124);
  }
  pcStack_154 = &LAB_0052cef1;
  pcStack_158 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_158;
  puStack_150 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x5c))(local_8,0);
  FUN_0045d540((int *)local_8[0x20],local_8[0x22]);
  *in_FS_OFFSET = pcStack_158;
  puStack_150 = (undefined1 *)0x52cf1c;
  iVar4 = FUN_0045da14(local_8[0x20]);
  if (iVar4 == 0) {
    local_8[0x22] = -0x80000000;
  }
  else {
    puStack_150 = (undefined1 *)0x52cf3d;
    iVar4 = FUN_0045da14(local_8[0x20]);
    if (iVar4 == local_8[0x22]) {
      piVar1 = local_8 + 0x22;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      if (SBORROW4(iVar4,1)) {
        puStack_150 = (undefined1 *)0x52cf59;
        thunk_FUN_00402874((uint)local_8);
      }
    }
  }
  piVar1 = local_8 + 0x25;
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar4,1)) {
    puStack_150 = (undefined1 *)0x52cf6a;
    thunk_FUN_00402874((uint)local_8);
  }
  *in_FS_OFFSET = pcStack_14c;
  puStack_144 = &LAB_0052cf9c;
  pcStack_148 = (char *)0x52cf87;
  FUN_00403dd4(&local_128,2);
  pcStack_148 = (char *)0x52cf94;
  FUN_00403dd4(&local_18,2);
  return;
}

