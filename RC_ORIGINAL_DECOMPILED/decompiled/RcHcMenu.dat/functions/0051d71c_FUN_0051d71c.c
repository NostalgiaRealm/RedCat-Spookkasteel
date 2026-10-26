/*
 * FUN_0051d71c at 0051d71c
 * undefined __register FUN_0051d71c(int * param_1)
 * Address ranges: 0051d71c-0051d7c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x51b5f4 slot 45 for TFloatingColumn. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x51b5f4 slot 45 for
   TFloatingColumn. Original bytes unchanged; names and types still inferred. */

void FUN_0051d71c(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 local_18 [16];
  int *local_8;
  
  local_8 = param_1;
  FUN_0043a488();
  if (local_8[0x7e] != 0) {
    (**(code **)(*local_8 + 0x40))(local_8,local_18);
    *(undefined1 *)(local_8[0x7e] + 0x25) = 0;
    iVar2 = local_8[0x7e];
    piVar1 = (int *)FUN_0051e1b8(*(int **)(local_8[0x7e] + 0x3c));
    (**(code **)(*piVar1 + 0xbc))(piVar1,local_8[0x7c],local_18,iVar2);
    iVar2 = local_8[0x7e];
    piVar1 = (int *)FUN_0051e1b8(*(int **)(local_8[0x7e] + 0x3c));
    (**(code **)(*piVar1 + 0xc0))(piVar1,local_8[0x7c],local_18,iVar2);
    *(undefined1 *)(local_8[0x7e] + 0x25) = 2;
  }
  return;
}

