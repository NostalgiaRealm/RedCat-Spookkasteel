/*
 * FUN_00473154 at 00473154
 * int __register FUN_00473154(int * param_1)
 * Address ranges: 00473154-00473177
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00473154(int *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (param_1[0x10] <= param_1[0x11]) {
      return iVar2;
    }
    cVar1 = (**(code **)(*param_1 + 0x140))();
    if (cVar1 == '\0') break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

