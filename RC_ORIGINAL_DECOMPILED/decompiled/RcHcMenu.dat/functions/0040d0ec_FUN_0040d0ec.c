/*
 * FUN_0040d0ec at 0040d0ec
 * undefined __register FUN_0040d0ec(void)
 * Address ranges: 0040d0ec-0040d149
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040d0ec(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_10;
  undefined1 local_c;
  
  iVar1 = FUN_0040292c();
  for (iVar3 = 0; (iVar3 < 7 && (iVar1 != (&DAT_0056f264)[iVar3 * 2])); iVar3 = iVar3 + 1) {
  }
  if (iVar3 < 7) {
    piVar2 = FUN_0040ceec((int *)&DAT_00408c38,'\x01',(undefined4 *)(&DAT_0056f268)[iVar3 * 2]);
  }
  else {
    local_c = 0;
    local_10 = iVar1;
    piVar2 = (int *)FUN_0040cfe4((int)&DAT_00408c38,'\x01',(undefined4 *)PTR_PTR_00572158,0,
                                 &local_10);
  }
  piVar2[3] = iVar1;
  return;
}

