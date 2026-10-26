/*
 * FUN_10010b30 at 10010b30
 * undefined FUN_10010b30(void)
 * Address ranges: 10010b30-10010c6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10010b30(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  float10 fVar3;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  piVar1 = (int *)(param_1 + 0x10 + (param_2 * 0x400 + param_3) * 4);
  piVar2 = (int *)*piVar1;
  if (piVar2 == (int *)0x0) {
    if (0x17fe < *(int *)(param_1 + 4)) {
      (*DAT_1014e358)(s_TriPatch_>NumEdges_>_MAX_TRI_EDG_10039934);
      return (int *)0x0;
    }
    FUN_10014560(local_c);
    FUN_100144b0();
    FUN_100143f0(local_18);
    fVar3 = (float10)FUN_100143d0();
    piVar2 = (int *)(param_1 + 0x401010 + *(int *)(param_1 + 4) * 0x1c);
    *piVar2 = param_2;
    piVar2[1] = param_3;
    piVar2[6] = 0;
    FUN_100145d0();
    piVar2[5] = (int)(float)fVar3;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    *piVar1 = (int)piVar2;
    piVar1 = (int *)(param_1 + 0x401010 + *(int *)(param_1 + 4) * 0x1c);
    piVar1[1] = param_2;
    *piVar1 = param_3;
    piVar1[6] = 0;
    FUN_100145d0();
    FUN_10014600();
    piVar1[5] = (int)-(float)fVar3;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    *(int **)(param_1 + 0x10 + (param_3 * 0x400 + param_2) * 4) = piVar1;
  }
  return piVar2;
}

