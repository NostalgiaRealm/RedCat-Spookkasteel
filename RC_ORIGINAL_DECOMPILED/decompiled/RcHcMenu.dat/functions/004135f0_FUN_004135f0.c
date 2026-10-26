/*
 * FUN_004135f0 at 004135f0
 * undefined __register FUN_004135f0(undefined4 param_1, int * param_2)
 * Address ranges: 004135f0-00413629
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410b88 slot 1 for TStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410b88 slot 1 for TStrings.
   Original bytes unchanged; names and types still inferred. */

void FUN_004135f0(undefined4 param_1,int *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  puVar3 = &LAB_00413e20;
  uVar2 = 0x414174;
  uVar4 = param_1;
  bVar1 = FUN_00413598();
  (**(code **)(*param_2 + 4))(param_2,"Strings",bVar1,uVar2,param_1,puVar3,uVar4);
  return;
}

