/*
 * FUN_005d36a0 at 005d36a0
 * undefined FUN_005d36a0(void)
 * Address ranges: 005d36a0-005d370f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_005d36a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x3b0);
  iVar2 = 0;
  piVar3 = (int *)(iVar1 + 0x3e4);
  do {
    if (*piVar3 == 0) {
      if (iVar2 < 0x20) {
        piVar4 = piVar3;
        for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = 0;
          piVar4 = piVar4 + 1;
        }
        *piVar3 = 1;
        *(int *)(iVar1 + 0xa64) = *(int *)(iVar1 + 0xa64) + 1;
        return piVar3;
      }
      break;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0xd;
  } while (iVar2 < 0x20);
  FUN_005cf220(0x2a,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006ac544,0x56d,&DAT_006b3f70,0)
  ;
  return (int *)0x0;
}

