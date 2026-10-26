/*
 * FUN_006039c3 at 006039c3
 * undefined FUN_006039c3(void)
 * Address ranges: 006039c3-00603d0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_006039c3(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int local_c;
  int local_8;
  
  sVar3 = FUN_0060a03a(0x30);
  piVar5 = (int *)FUN_00605f2b(param_4,0,1);
  cVar2 = FUN_006069c8(param_3);
  puVar9 = param_1;
  if (cVar2 == '\0') {
    if (*(char *)(param_2 + 4) == '\0') {
      Peek();
    }
    sVar4 = FUN_0060a03a(0x2b);
    if (*(short *)(param_2 + 6) == sVar4) {
      *param_1 = 0x2b;
    }
    else {
      if (*(char *)(param_2 + 4) == '\0') {
        Peek();
      }
      sVar4 = FUN_0060a03a(0x2d);
      if (*(short *)(param_2 + 6) != sVar4) goto LAB_00603a48;
      *param_1 = 0x2d;
    }
    FUN_00605560();
    puVar9 = param_1 + 1;
  }
LAB_00603a48:
  bVar1 = false;
  cVar2 = FUN_006069c8(param_3);
  if (cVar2 == '\0') {
    do {
      if (*(char *)(param_2 + 4) == '\0') {
        Peek();
      }
      if (*(short *)(param_2 + 6) != sVar3) break;
      bVar1 = true;
      FUN_00605560();
      cVar2 = FUN_006069c8(param_3);
    } while (cVar2 == '\0');
    if (bVar1) {
      *puVar9 = 0x30;
      puVar9 = puVar9 + 1;
    }
  }
  local_c = 0;
  local_8 = 0;
  while( true ) {
    cVar2 = FUN_006069c8(param_3);
    if (cVar2 != '\0') break;
    if (*(char *)(param_2 + 4) == '\0') {
      Peek();
    }
    uVar6 = FUN_00600c15(*(undefined2 *)(param_2 + 6));
    *puVar9 = (char)uVar6;
    cVar2 = FUN_00600a5b(uVar6,param_4);
    if (cVar2 == '\0') break;
    if (local_c < 0x24) {
      puVar9 = puVar9 + 1;
      local_c = local_c + 1;
    }
    else {
      local_8 = local_8 + 1;
    }
    bVar1 = true;
    FUN_00605560();
  }
  cVar2 = FUN_006069c8(param_3);
  if (cVar2 == '\0') {
    if (*(char *)(param_2 + 4) == '\0') {
      Peek();
    }
    sVar4 = (**(code **)(*piVar5 + 4))();
    if (*(short *)(param_2 + 6) == sVar4) {
      puVar7 = (undefined4 *)FUN_0060e6d3();
      *puVar9 = *(undefined1 *)*puVar7;
      puVar9 = puVar9 + 1;
      FUN_00605560();
    }
  }
  if (local_c == 0) {
    while( true ) {
      cVar2 = FUN_006069c8(param_3);
      if (cVar2 != '\0') break;
      if (*(char *)(param_2 + 4) == '\0') {
        Peek();
      }
      if (*(short *)(param_2 + 6) != sVar3) break;
      local_8 = local_8 + -1;
      bVar1 = true;
      FUN_00605560();
    }
    if (local_8 < 0) {
      *puVar9 = 0x30;
      puVar9 = puVar9 + 1;
      local_8 = local_8 + 1;
    }
  }
  while( true ) {
    cVar2 = FUN_006069c8(param_3);
    if (cVar2 != '\0') break;
    if (*(char *)(param_2 + 4) == '\0') {
      Peek();
    }
    uVar6 = FUN_00600c15(*(undefined2 *)(param_2 + 6));
    *puVar9 = (char)uVar6;
    cVar2 = FUN_00600a5b(uVar6,param_4);
    if (cVar2 == '\0') break;
    if (local_c < 0x24) {
      puVar9 = puVar9 + 1;
      local_c = local_c + 1;
    }
    bVar1 = true;
    FUN_00605560();
  }
  if (bVar1) {
    cVar2 = FUN_006069c8(param_3);
    bVar1 = true;
    puVar10 = puVar9;
    if (cVar2 == '\0') {
      if (*(char *)(param_2 + 4) == '\0') {
        Peek();
      }
      sVar4 = FUN_0060a03a(0x65);
      if (*(short *)(param_2 + 6) != sVar4) {
        if (*(char *)(param_2 + 4) == '\0') {
          Peek();
        }
        sVar4 = FUN_0060a03a(0x45);
        if (*(short *)(param_2 + 6) != sVar4) goto LAB_00603cfa;
      }
      *puVar9 = 0x65;
      puVar10 = puVar9 + 1;
      FUN_00605560();
      bVar1 = false;
      iVar8 = 0;
      cVar2 = FUN_006069c8(param_3);
      if (cVar2 == '\0') {
        if (*(char *)(param_2 + 4) == '\0') {
          Peek();
        }
        sVar4 = FUN_0060a03a(0x2b);
        if (*(short *)(param_2 + 6) == sVar4) {
          *puVar10 = 0x2b;
        }
        else {
          if (*(char *)(param_2 + 4) == '\0') {
            Peek();
          }
          sVar4 = FUN_0060a03a(0x2d);
          if (*(short *)(param_2 + 6) != sVar4) goto LAB_00603c68;
          *puVar10 = 0x2d;
        }
        puVar10 = puVar9 + 2;
        FUN_00605560();
      }
LAB_00603c68:
      cVar2 = FUN_006069c8(param_3);
      if (cVar2 == '\0') {
        do {
          if (*(char *)(param_2 + 4) == '\0') {
            Peek();
          }
          if (*(short *)(param_2 + 6) != sVar3) break;
          bVar1 = true;
          FUN_00605560();
          cVar2 = FUN_006069c8(param_3);
        } while (cVar2 == '\0');
        if (bVar1) {
          *puVar10 = 0x30;
          puVar10 = puVar10 + 1;
        }
      }
      while( true ) {
        cVar2 = FUN_006069c8(param_3);
        if (cVar2 != '\0') break;
        if (*(char *)(param_2 + 4) == '\0') {
          Peek();
        }
        uVar6 = FUN_00600c15(*(undefined2 *)(param_2 + 6));
        *puVar10 = (char)uVar6;
        cVar2 = FUN_00600a5b(uVar6,param_4);
        if (cVar2 == '\0') break;
        if (iVar8 < 8) {
          puVar10 = puVar10 + 1;
          iVar8 = iVar8 + 1;
        }
        bVar1 = true;
        FUN_00605560();
      }
    }
LAB_00603cfa:
    if (bVar1) goto LAB_00603d03;
  }
  puVar10 = param_1;
LAB_00603d03:
  *puVar10 = 0;
  return local_8;
}

