/*
 * FUN_0042c7ec at 0042c7ec
 * int __register FUN_0042c7ec(int param_1)
 * Address ranges: 0042c7ec-0042c82d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0042c7ec(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_18 [4];
  int local_14;
  int local_c;
  
  iVar2 = *(int *)(param_1 + 0x200);
  bVar1 = FUN_00438c84(param_1);
  if ((bVar1) && (*(char *)(param_1 + 0x204) == '\0')) {
    FUN_00433700(param_1,0x198,0,auStack_18);
    iVar2 = local_c - local_14;
  }
  return iVar2;
}

