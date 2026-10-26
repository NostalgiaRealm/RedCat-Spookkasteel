/*
 * FUN_00473178 at 00473178
 * int __register FUN_00473178(int * param_1)
 * Address ranges: 00473178-0047319b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00473178(int *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (param_1[0x10] <= param_1[0x11]) {
      return iVar2;
    }
    cVar1 = (**(code **)(*param_1 + 0x148))();
    if (cVar1 == '\0') break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

