/*
 * FUN_0040c53c at 0040c53c
 * undefined __register FUN_0040c53c(int param_1)
 * Address ranges: 0040c53c-0040c588
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040c53c(int param_1)

{
  char cVar1;
  int iVar2;
  double local_18;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  local_10 = 1;
  cVar1 = FUN_0040c00c(param_1,&local_10,&local_18);
  if ((cVar1 != '\0') && (iVar2 = FUN_00404030(param_1), iVar2 < local_10)) {
    return;
  }
  local_8 = 0xb;
  local_c = param_1;
  FUN_004095ac((undefined4 *)PTR_PTR_00572328,&local_c,0);
  return;
}

