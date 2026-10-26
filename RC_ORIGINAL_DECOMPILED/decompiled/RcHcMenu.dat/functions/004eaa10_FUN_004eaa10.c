/*
 * FUN_004eaa10 at 004eaa10
 * undefined4 __register FUN_004eaa10(int param_1)
 * Address ranges: 004eaa10-004eaa46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 15 for TAppBDEQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 15 for
   TAppBDEQuery. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004eaa10(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined3 uVar4;
  
  uVar3 = FUN_004714b4(*(int *)(param_1 + 0x30));
  if ((char)uVar3 != '\0') {
    cVar1 = FUN_004ea5ac(*(int *)(param_1 + 0x30));
    if (cVar1 != '\0') {
      uVar2 = 1;
      uVar4 = extraout_var;
      goto LAB_004eaa3d;
    }
  }
  uVar2 = 0;
  uVar4 = 0;
LAB_004eaa3d:
  return CONCAT31(uVar4,uVar2);
}

