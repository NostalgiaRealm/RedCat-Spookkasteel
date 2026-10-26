/*
 * FUN_0060012a at 0060012a
 * undefined FUN_0060012a(void)
 * Address ranges: 0060012a-00600415
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0060012a(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int local_c;
  int local_8;
  
  piVar4 = (int *)FUN_00600734(param_4,0,1);
  cVar3 = FUN_00600aa5(param_3);
  puVar7 = param_1;
  if (cVar3 == '\0') {
    if (*(char *)(param_2 + 4) == '\0') {
      Peek();
    }
    if (*(char *)(param_2 + 5) == '+') {
      *param_1 = 0x2b;
    }
    else {
      if (*(char *)(param_2 + 4) == '\0') {
        Peek();
      }
      if (*(char *)(param_2 + 5) != '-') goto LAB_00600195;
      *param_1 = 0x2d;
    }
    FUN_0060045f();
    puVar7 = param_1 + 1;
  }
LAB_00600195:
  bVar2 = false;
  cVar3 = FUN_00600aa5(param_3);
  if (cVar3 == '\0') {
    do {
      if (*(char *)(param_2 + 4) == '\0') {
        Peek();
      }
      if (*(char *)(param_2 + 5) != '0') break;
      bVar2 = true;
      FUN_0060045f();
      cVar3 = FUN_00600aa5(param_3);
    } while (cVar3 == '\0');
    if (bVar2) {
      *puVar7 = 0x30;
      puVar7 = puVar7 + 1;
    }
  }
  local_c = 0;
  local_8 = 0;
  while( true ) {
    cVar3 = FUN_00600aa5(param_3);
    if (cVar3 != '\0') break;
    if (*(char *)(param_2 + 4) == '\0') {
      Peek();
    }
    uVar1 = *(undefined1 *)(param_2 + 5);
    *puVar7 = uVar1;
    cVar3 = FUN_00600a5b(uVar1,param_4);
    if (cVar3 == '\0') break;
    if (local_c < 0x24) {
      puVar7 = puVar7 + 1;
      local_c = local_c + 1;
    }
    else {
      local_8 = local_8 + 1;
    }
    bVar2 = true;
    FUN_0060045f();
  }
  cVar3 = FUN_00600aa5(param_3);
  if (cVar3 == '\0') {
    if (*(char *)(param_2 + 4) == '\0') {
      Peek();
    }
    cVar3 = (**(code **)(*piVar4 + 4))();
    if (*(char *)(param_2 + 5) == cVar3) {
      puVar5 = (undefined4 *)FUN_0060e6d3();
      *puVar7 = *(undefined1 *)*puVar5;
      puVar7 = puVar7 + 1;
      FUN_0060045f();
    }
  }
  if (local_c == 0) {
    while( true ) {
      cVar3 = FUN_00600aa5(param_3);
      if (cVar3 != '\0') break;
      if (*(char *)(param_2 + 4) == '\0') {
        Peek();
      }
      if (*(char *)(param_2 + 5) != '0') break;
      local_8 = local_8 + -1;
      bVar2 = true;
      FUN_0060045f();
    }
    if (local_8 < 0) {
      *puVar7 = 0x30;
      puVar7 = puVar7 + 1;
      local_8 = local_8 + 1;
    }
  }
  while( true ) {
    cVar3 = FUN_00600aa5(param_3);
    if (cVar3 != '\0') break;
    if (*(char *)(param_2 + 4) == '\0') {
      Peek();
    }
    uVar1 = *(undefined1 *)(param_2 + 5);
    *puVar7 = uVar1;
    cVar3 = FUN_00600a5b(uVar1,param_4);
    if (cVar3 == '\0') break;
    if (local_c < 0x24) {
      puVar7 = puVar7 + 1;
      local_c = local_c + 1;
    }
    bVar2 = true;
    FUN_0060045f();
  }
  if (bVar2) {
    cVar3 = FUN_00600aa5(param_3);
    bVar2 = true;
    puVar8 = puVar7;
    if (cVar3 == '\0') {
      if (*(char *)(param_2 + 4) == '\0') {
        Peek();
      }
      if (*(char *)(param_2 + 5) != 'e') {
        if (*(char *)(param_2 + 4) == '\0') {
          Peek();
        }
        if (*(char *)(param_2 + 5) != 'E') goto LAB_00600402;
      }
      *puVar7 = 0x65;
      puVar8 = puVar7 + 1;
      FUN_0060045f();
      bVar2 = false;
      iVar6 = 0;
      cVar3 = FUN_00600aa5(param_3);
      if (cVar3 == '\0') {
        if (*(char *)(param_2 + 4) == '\0') {
          Peek();
        }
        if (*(char *)(param_2 + 5) == '+') {
          *puVar8 = 0x2b;
        }
        else {
          if (*(char *)(param_2 + 4) == '\0') {
            Peek();
          }
          if (*(char *)(param_2 + 5) != '-') goto LAB_0060037c;
          *puVar8 = 0x2d;
        }
        puVar8 = puVar7 + 2;
        FUN_0060045f();
      }
LAB_0060037c:
      cVar3 = FUN_00600aa5(param_3);
      if (cVar3 == '\0') {
        do {
          if (*(char *)(param_2 + 4) == '\0') {
            Peek();
          }
          if (*(char *)(param_2 + 5) != '0') break;
          bVar2 = true;
          FUN_0060045f();
          cVar3 = FUN_00600aa5(param_3);
        } while (cVar3 == '\0');
        if (bVar2) {
          *puVar8 = 0x30;
          puVar8 = puVar8 + 1;
        }
      }
      while( true ) {
        cVar3 = FUN_00600aa5(param_3);
        if (cVar3 != '\0') break;
        if (*(char *)(param_2 + 4) == '\0') {
          Peek();
        }
        uVar1 = *(undefined1 *)(param_2 + 5);
        *puVar8 = uVar1;
        cVar3 = FUN_00600a5b(uVar1,param_4);
        if (cVar3 == '\0') break;
        if (iVar6 < 8) {
          puVar8 = puVar8 + 1;
          iVar6 = iVar6 + 1;
        }
        bVar2 = true;
        FUN_0060045f();
      }
    }
LAB_00600402:
    if (bVar2) goto LAB_0060040b;
  }
  puVar8 = param_1;
LAB_0060040b:
  *puVar8 = 0;
  return local_8;
}

