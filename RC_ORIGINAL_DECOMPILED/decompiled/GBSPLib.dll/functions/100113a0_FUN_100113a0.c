/*
 * FUN_100113a0 at 100113a0
 * undefined FUN_100113a0(void)
 * Address ranges: 100113a0-1001143a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100113a0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  float local_14;
  int local_10;
  undefined1 local_c [12];
  
  iVar3 = 0;
  local_14 = 30384.0;
  local_10 = 0;
  if (0 < *param_2) {
    piVar2 = param_2 + 0x100004;
    do {
      iVar1 = *piVar2;
      FUN_10014560(local_c);
      fVar4 = (float10)FUN_10014550();
      if (fVar4 < (float10)local_14) {
        local_14 = (float)fVar4;
        local_10 = iVar1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *param_2);
    if (local_10 != 0) {
      FUN_100145d0();
      return 1;
    }
  }
  (*DAT_1014e358)(s_FindClosestTriPoint__No_Points__10039a68);
  return 0;
}

