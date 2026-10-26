/*
 * FUN_00422480 at 00422480
 * undefined __register FUN_00422480(int * param_1, int * param_2, char param_3)
 * Address ranges: 00422480-0042274d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00422480(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  HGDIOBJ pvVar5;
  int local_43c;
  uint local_438;
  int local_434;
  HGDIOBJ local_430;
  undefined1 local_42c [10];
  int local_422;
  undefined4 local_41e;
  undefined2 local_41a;
  undefined2 local_418;
  undefined2 local_416;
  undefined2 local_414;
  tagPALETTEENTRY local_412 [256];
  
  FUN_00402cfc((undefined4 *)local_42c,0xe,0);
  local_42c._0_2_ = 0x4d42;
  if (*(int **)(param_1[8] + 0x6c) == (int *)0x0) {
    FUN_004215c4((int)param_1);
    iVar1 = param_1[8];
    local_43c = 0;
    if (*(HANDLE *)(iVar1 + 0x14) != (HANDLE)0x0) {
      FUN_0041e1a8(*(HANDLE *)(iVar1 + 0x14),&local_434,&local_43c,*(uint *)(iVar1 + 0x50));
      if (*(char *)(iVar1 + 0x70) != '\0') {
        local_434 = 0xc;
        if (*(ushort *)(iVar1 + 0x3e) < 9) {
          local_434 = (1 << ((byte)*(ushort *)(iVar1 + 0x3e) & 0x1f)) * 3 + 0xc;
        }
      }
      local_43c = local_43c + local_434 + 0xe;
      FUN_00402cfc((undefined4 *)local_42c,0xe,0);
      local_42c._0_2_ = 0x4d42;
      piVar4 = (int *)FUN_00421490(param_1);
      FUN_0041d040(piVar4,1);
      pvVar5 = SelectObject(*(HDC *)(param_1[9] + 4),*(HGDIOBJ *)(iVar1 + 0x14));
      local_430 = (HGDIOBJ)FUN_0041d364((int)pvVar5);
      local_438 = GetDIBColorTable(*(HDC *)(param_1[9] + 4),0,0x100,(RGBQUAD *)local_412);
      SelectObject(*(HDC *)(param_1[9] + 4),local_430);
      uVar2 = *(uint *)(iVar1 + 0x50);
      if ((uVar2 != 0) && (uVar2 < local_438)) {
        local_438 = uVar2;
      }
      if ((((*(char *)(iVar1 + 0x70) == '\0') && (local_438 == 0)) && (*(int *)(iVar1 + 0x10) != 0))
         && (*(char *)(iVar1 + 0x71) == '\0')) {
        local_438 = FUN_0041daf8(*(HPALETTE *)(iVar1 + 0x10),local_412,0xff);
        if (8 < *(ushort *)(iVar1 + 0x3e)) {
          local_43c = local_43c + local_438 * 4;
          local_434 = local_434 + local_438 * 4;
        }
      }
      local_42c._2_4_ = local_43c;
      local_422 = local_434 + 0xe;
    }
    if (param_3 != '\0') {
      FUN_0041483c(param_2,&local_43c,4);
    }
    if (local_43c != 0) {
      FUN_0042060c(iVar1 + 0x18);
      if (local_438 != 0) {
        if ((*(uint *)(iVar1 + 0x50) == 0) || (*(uint *)(iVar1 + 0x50) != local_438)) {
          *(uint *)(iVar1 + 0x50) = local_438;
        }
        if (*(char *)(iVar1 + 0x70) != '\0') {
          FUN_0041d7d4((int)local_412,(int *)&local_438);
        }
      }
      if (*(char *)(iVar1 + 0x70) == '\0') {
        FUN_0041483c(param_2,local_42c,0xe);
        FUN_0041483c(param_2,iVar1 + 0x30,0x28);
        if ((8 < *(ushort *)(iVar1 + 0x3e)) && ((*(byte *)(iVar1 + 0x40) & 3) != 0)) {
          FUN_0041483c(param_2,iVar1 + 0x58,0xc);
        }
      }
      else {
        local_41e = 0xc;
        local_41a = *(undefined2 *)(iVar1 + 0x34);
        local_418 = *(undefined2 *)(iVar1 + 0x38);
        local_416 = 1;
        local_414 = *(undefined2 *)(iVar1 + 0x3e);
        FUN_0041483c(param_2,local_42c,0xe);
        FUN_0041483c(param_2,&local_41e,0xc);
      }
      FUN_0041483c(param_2,local_412,(byte)(&DAT_0056f654)[*(byte *)(iVar1 + 0x70)] * local_438);
      FUN_0041483c(param_2,*(undefined4 *)(iVar1 + 0x2c),*(int *)(iVar1 + 0x44));
    }
  }
  else {
    local_43c = FUN_004147cc(*(int **)(param_1[8] + 0x6c));
    local_43c = local_43c + 0xe;
    local_42c._2_4_ = local_43c;
    if (param_3 != '\0') {
      FUN_0041483c(param_2,&local_43c,4);
    }
    (**(code **)(*param_2 + 8))(param_2,local_42c,0xe);
    piVar4 = *(int **)(param_1[8] + 0x6c);
    uVar3 = FUN_004147cc(piVar4);
    (**(code **)(*param_2 + 8))(param_2,piVar4[1],uVar3);
  }
  return;
}

