/*
 * FUN_0051b03c at 0051b03c
 * undefined __register FUN_0051b03c(int param_1, undefined4 param_2)
 * Address ranges: 0051b03c-0051b0f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x519c54 slot published:pboSort1Paint for TfrmDaviGridSettings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x519c54 slot
   published:pboSort1Paint for TfrmDaviGridSettings. Original bytes unchanged; names and types still
   inferred. */

void FUN_0051b03c(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int local_1c [4];
  undefined4 local_c;
  int local_8;
  
  local_c = param_2;
  local_8 = param_1;
  iVar2 = FUN_0042a950(*(int **)(param_1 + 0x2f0));
  if ((iVar2 != 0) && (*(int *)(local_8 + 0x350) != 0)) {
    cVar1 = (**(code **)(**(int **)(local_8 + 0x308) + 0xb4))();
    if (cVar1 == '\0') {
      cVar1 = '\x01';
      iVar2 = 0;
      (**(code **)(**(int **)(local_8 + 0x328) + 0x40))(*(int **)(local_8 + 0x328),local_1c);
      FUN_00522d50(*(int **)(local_8 + 0x350),*(int **)(*(int *)(local_8 + 0x328) + 0x120),local_1c,
                   iVar2,cVar1);
    }
    else {
      cVar1 = '\0';
      iVar2 = 0;
      (**(code **)(**(int **)(local_8 + 0x328) + 0x40))(*(int **)(local_8 + 0x328),local_1c);
      FUN_00522d50(*(int **)(local_8 + 0x350),*(int **)(*(int *)(local_8 + 0x328) + 0x120),local_1c,
                   iVar2,cVar1);
    }
  }
  return;
}

