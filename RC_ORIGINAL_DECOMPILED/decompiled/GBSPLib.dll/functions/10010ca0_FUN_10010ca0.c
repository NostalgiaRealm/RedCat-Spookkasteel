/*
 * FUN_10010ca0 at 10010ca0
 * undefined FUN_10010ca0(void)
 * Address ranges: 10010ca0-10010e99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10010ca0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  int local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  piVar2 = param_1;
  if (param_2[6] != 0) {
    return true;
  }
  iVar5 = 0;
  param_1 = (int *)0x3f8ccccd;
  if (*piVar2 < 1) {
    return true;
  }
  do {
    fVar6 = (float10)FUN_100143d0();
    if ((float10)0.0 <= fVar6 - (float10)(float)param_2[5]) {
      FUN_10014560(local_c);
      FUN_10014560(local_18);
      fVar6 = (float10)FUN_100144b0();
      if (((fVar6 != (float10)0.0) && (fVar6 = (float10)FUN_100144b0(), fVar6 != (float10)0.0)) &&
         (fVar6 = (float10)FUN_100143d0(), fVar6 < (float10)(float)param_1)) {
        param_1 = (int *)(float)fVar6;
        local_1c = iVar5;
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < *piVar2);
  if (1.0 <= (float)param_1) {
    return true;
  }
  piVar3 = (int *)FUN_10010c70(piVar2);
  if (piVar3 == (int *)0x0) {
    (*DAT_1014e358)(s_Tri_Edge_r__Could_not_allocate_t_100399b4);
    return false;
  }
  *piVar3 = (int)param_2;
  if (param_2 != (undefined4 *)0x0) {
    iVar5 = FUN_10010b30(piVar2,param_2[1],local_1c);
    piVar3[1] = iVar5;
    if (iVar5 != 0) {
      iVar5 = FUN_10010b30(piVar2,local_1c,*param_2);
      piVar3[2] = iVar5;
      if (iVar5 != 0) {
        iVar5 = 3;
        piVar4 = piVar3;
        do {
          iVar1 = *piVar4;
          piVar4 = piVar4 + 1;
          iVar5 = iVar5 + -1;
          *(int **)(iVar1 + 0x18) = piVar3;
        } while (iVar5 != 0);
        iVar5 = FUN_10010b30(piVar2,local_1c,param_2[1]);
        if (iVar5 != 0) {
          iVar5 = FUN_10010ca0(piVar2,iVar5);
          if (iVar5 == 0) {
            return false;
          }
          iVar5 = FUN_10010b30(piVar2,*param_2,local_1c);
          if (iVar5 != 0) {
            iVar5 = FUN_10010ca0(piVar2,iVar5);
            return iVar5 != 0;
          }
        }
      }
    }
  }
  (*DAT_1014e358)(s_Tri_Edge_r__There_was_an_error_f_10039980);
  return false;
}

