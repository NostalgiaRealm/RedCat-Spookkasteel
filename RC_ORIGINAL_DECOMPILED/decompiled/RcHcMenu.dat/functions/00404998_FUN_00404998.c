/*
 * FUN_00404998 at 00404998
 * undefined __register FUN_00404998(VARIANT * param_1, char * param_2, int param_3)
 * Address ranges: 00404998-00404a55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_00404998(VARIANT *param_1,char *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  _union_2683 *p_Var3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  cVar1 = *param_2;
  uVar4 = (uint)(byte)param_2[1];
  if (cVar1 == '\n') {
    do {
      p_Var3 = &param_1->n1;
      param_1 = (VARIANT *)((int)&param_1->n1 + 4);
      FUN_004041e4(*(int *)p_Var3);
      iVar6 = param_3 + -1;
      bVar2 = 0 < param_3;
      param_3 = iVar6;
    } while (iVar6 != 0 && bVar2);
  }
  else if (cVar1 == '\v') {
    do {
      FUN_00404760((undefined4 *)param_1);
      iVar6 = param_3 + -1;
      bVar2 = 0 < param_3;
      param_1 = (VARIANT *)((int)&param_1->n1 + 4);
      param_3 = iVar6;
    } while (iVar6 != 0 && bVar2);
  }
  else if (cVar1 == '\f') {
    do {
      FUN_00405bd4(param_1);
      iVar6 = param_3 + -1;
      bVar2 = 0 < param_3;
      param_1 = param_1 + 1;
      param_3 = iVar6;
    } while (iVar6 != 0 && bVar2);
  }
  else if (cVar1 == '\r') {
    do {
      iVar6 = *(int *)(param_2 + uVar4 + 2);
      FUN_00404998(param_1,(char *)**(undefined4 **)(param_2 + uVar4 + 10),
                   *(int *)(param_2 + uVar4 + 6));
      iVar5 = param_3 + -1;
      bVar2 = 0 < param_3;
      param_1 = (VARIANT *)((int)&param_1->n1 + iVar6);
      param_3 = iVar5;
    } while (iVar5 != 0 && bVar2);
  }
  else if (cVar1 == '\x0e') {
    do {
      iVar6 = *(int *)(param_2 + uVar4 + 2);
      FUN_0040496c((int)param_1,(int)param_2);
      iVar5 = param_3 + -1;
      bVar2 = 0 < param_3;
      param_1 = (VARIANT *)((int)&param_1->n1 + iVar6);
      param_3 = iVar5;
    } while (iVar5 != 0 && bVar2);
  }
  else if (cVar1 == '\x0f') {
    do {
      p_Var3 = &param_1->n1;
      param_1 = (VARIANT *)((int)&param_1->n1 + 4);
      FUN_00406b00(*(int **)p_Var3);
      iVar6 = param_3 + -1;
      bVar2 = 0 < param_3;
      param_3 = iVar6;
    } while (iVar6 != 0 && bVar2);
  }
  else {
    if (cVar1 != '\x11') {
      FUN_00402874(CONCAT31((int3)((uint)param_1 >> 8),2));
      return;
    }
    do {
      p_Var3 = &param_1->n1;
      param_1 = (VARIANT *)((int)&param_1->n1 + 4);
      FUN_004064c4(*(int *)p_Var3);
      iVar6 = param_3 + -1;
      bVar2 = 0 < param_3;
      param_3 = iVar6;
    } while (iVar6 != 0 && bVar2);
  }
  return;
}

