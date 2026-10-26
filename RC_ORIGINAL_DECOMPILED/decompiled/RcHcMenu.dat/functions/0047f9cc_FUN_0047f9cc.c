/*
 * FUN_0047f9cc at 0047f9cc
 * undefined __register FUN_0047f9cc(int * param_1, char param_2)
 * Address ranges: 0047f9cc-0047fa39;0047fa46-0047fa75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47d3d0 slot -1 for TBDECallback. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47d3d0 slot -1 for
   TBDECallback. Original bytes unchanged; names and types still inferred. */

void FUN_0047f9cc(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  char extraout_DL;
  int *in_FS_OFFSET;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x47f9da;
  piVar2 = FUN_00403434(param_1,param_2);
  if ((char)piVar2[8] != '\0') {
    if (piVar2[7] == 0) {
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x0;
      iStack_24 = 0;
      thunk_FUN_00479a3b(piVar2[1]);
    }
    else {
      puStack_20 = &LAB_0047fa3a;
      iStack_24 = *in_FS_OFFSET;
      *in_FS_OFFSET = (int)&iStack_24;
      iVar1 = piVar2[1];
      puStack_1c = &stack0xfffffffc;
      thunk_FUN_00479a3b(iVar1);
      *in_FS_OFFSET = iVar1;
    }
  }
  if ('\0' < extraout_DL) {
    FUN_00403424(piVar2);
  }
  return;
}

