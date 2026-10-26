/*
 * FUN_004f1430 at 004f1430
 * undefined FUN_004f1430(void)
 * Address ranges: 004f1430-004f148e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_004f1430(int param_1,void *param_2,uint param_3,size_t param_4)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  
  if ((param_4 != 0) && (uVar1 = *(uint *)(param_1 + 8), param_3 < uVar1)) {
    iVar2 = *(int *)(param_1 + 4);
    for (pcVar4 = (char *)(iVar2 + param_3); pcVar4 < (char *)(iVar2 + uVar1); pcVar4 = pcVar4 + 1)
    {
      pvVar3 = _memchr(param_2,(int)*pcVar4,param_4);
      if (pvVar3 != (void *)0x0) {
        return (int)pcVar4 - *(int *)(param_1 + 4);
      }
    }
  }
  return -1;
}

