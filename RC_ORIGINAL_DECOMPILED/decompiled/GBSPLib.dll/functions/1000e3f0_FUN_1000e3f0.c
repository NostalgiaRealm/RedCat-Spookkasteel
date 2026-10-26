/*
 * FUN_1000e3f0 at 1000e3f0
 * undefined FUN_1000e3f0(void)
 * Address ranges: 1000e3f0-1000e47d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000e3f0(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = param_1;
  param_1 = (int *)FUN_1000c3f0(&DAT_1003fdf8 + *param_1 * 5);
  if (param_1 == (int *)0x0) {
    (*DAT_1014e358)(s_CreatePolyOnNode__Could_not_crea_10038ca8);
  }
  else {
    piVar3 = (int *)piVar2[6];
    while( true ) {
      piVar1 = piVar3;
      if ((piVar1 == (int *)0x0) || (param_1 == (int *)0x0)) {
        *param_2 = (int)param_1;
        return 1;
      }
      iVar4 = FUN_1000c890(param_1,0x3a83126f,&DAT_1003fdf8 + *piVar1 * 5,(int *)piVar1[4] != piVar2
                           ,&param_1);
      if (iVar4 == 0) break;
      piVar3 = (int *)piVar1[6];
      piVar2 = piVar1;
    }
  }
  return 0;
}

