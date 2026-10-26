/* Ghidra-generated C-like pseudocode for inspection. Not original source and not a buildable reconstruction. */
/*
 * xvga_src_fseek at 10001005
 * undefined __cdecl xvga_src_fseek(undefined * * param_1, int param_2, DWORD param_3)
 * Address ranges: 10001005-10001009
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_10001470
 */


void __cdecl xvga_src_fseek(undefined **param_1,int param_2,DWORD param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_48 [16];
  DWORD DStack_8;
  
                    /* 0x1005  13  xvga_src_fseek */
  puVar3 = auStack_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_1 == (undefined **)0x0) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  if (DAT_10031408 == 0) {
    FUN_10002320(param_1,param_2,param_3);
  }
  else {
    iVar2 = FUN_10015690((int)param_1);
    iVar1 = FUN_10015690((int)DAT_100313f8);
    if (iVar2 == iVar1) {
      DStack_8 = param_3;
      if (param_3 == 0) {
        if ((DAT_100313f0 < DAT_10031404 + param_2) || (DAT_10031404 + param_2 < DAT_10031404)) {
          MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
          __chkesp();
        }
        else {
          FUN_10002320(DAT_100313f8,DAT_10031404 + param_2,0);
        }
      }
      else if (param_3 == 1) {
        FUN_10002320(DAT_100313f8,DAT_10031404 + param_2,0);
      }
      else if (param_3 == 2) {
        if (DAT_100313f0 < DAT_100313f0 + param_2) {
          MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
          __chkesp();
        }
        else {
          FUN_10002320(DAT_100313f8,DAT_100313f0 + param_2,0);
        }
      }
      else {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
    }
    else {
      FUN_10002320(param_1,param_2,param_3);
    }
  }
  DStack_8 = 0x1000162c;
  __chkesp();
  return;
}


/*
 * xvga_fileio_set_check_sequence at 1000100a
 * undefined __cdecl xvga_fileio_set_check_sequence(int param_1)
 * Address ranges: 1000100a-1000100e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_100013f0
 */


void __cdecl xvga_fileio_set_check_sequence(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_48 [16];
  int iStack_8;
  
                    /* 0x100a  3  xvga_fileio_set_check_sequence */
  puVar2 = auStack_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  iStack_8 = param_1;
  if ((param_1 < 0) || (1 < param_1)) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  else {
    DAT_1003140c = param_1;
  }
  iStack_8 = 0x10001451;
  __chkesp();
  return;
}


/*
 * xvga_src_fopen at 1000100f
 * undefined __cdecl xvga_src_fopen(byte * param_1)
 * Address ranges: 1000100f-10001013
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_100017c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl xvga_src_fopen(byte *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_58 [16];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  short sStack_c;
  int iStack_8;
  
                    /* 0x100f  12  xvga_src_fopen */
  puVar3 = auStack_58;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((DAT_10031408 == 0) || (DAT_1003140c == 1)) {
    uStack_10 = FUN_100022c0((LPCSTR)param_1,"rb");
  }
  else {
    for (iStack_8 = 0; iStack_8 < _DAT_100313fc; iStack_8 = iStack_8 + 1) {
      uVar1 = FUN_100134c0((byte *)(DAT_10031400 + iStack_8 * 0x1c),param_1);
      if (uVar1 == 0) {
        DAT_10031404 = *(int *)(DAT_10031400 + 0x14 + iStack_8 * 0x1c);
        DAT_100313f0 = DAT_10031404 + *(int *)(DAT_10031400 + 0x18 + iStack_8 * 0x1c);
        break;
      }
    }
    sStack_c = DAT_100313fc;
    if (iStack_8 == DAT_100313fc) {
      uStack_14 = FUN_100022c0((LPCSTR)param_1,"rb");
    }
    else {
      iStack_18 = FUN_10002320(DAT_100313f8,DAT_10031404,0);
    }
  }
  iStack_8 = 0x100018e7;
  __chkesp();
  return;
}


/*
 * xvga_exit_fileio at 10001014
 * undefined __stdcall xvga_exit_fileio(void)
 * Address ranges: 10001014-10001018
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_10001b50
 */


void xvga_exit_fileio(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_44 [15];
  undefined4 uStack_8;
  
                    /* 0x1014  1  xvga_exit_fileio */
  puVar2 = auStack_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (DAT_10031408 != 0) {
    LocalFree(DAT_10031400);
    iVar1 = __chkesp();
    if (iVar1 == 0) {
      FUN_10001d70(DAT_100313f8);
      DAT_10031408 = 0;
    }
    else {
      MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
      __chkesp();
    }
  }
  uStack_8 = 0x10001bcf;
  __chkesp();
  return;
}


/*
 * xvga_rc_filepos at 10001019
 * undefined4 __cdecl xvga_rc_filepos(int param_1)
 * Address ranges: 10001019-1000101d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_10001c90
 */


undefined4 __cdecl xvga_rc_filepos(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_44 [16];
  
                    /* 0x1019  8  xvga_rc_filepos */
  puVar2 = auStack_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return *(undefined4 *)(DAT_10031400 + 0x14 + param_1 * 0x1c);
}


/*
 * xvga_src_filelength at 1000101e
 * undefined __cdecl xvga_src_filelength(int param_1)
 * Address ranges: 1000101e-10001022
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_100016a0
 */


void __cdecl xvga_src_filelength(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_4c [16];
  uint uStack_c;
  uint uStack_8;
  
                    /* 0x101e  11  xvga_src_filelength */
  puVar3 = auStack_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_1 == 0) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  if (DAT_10031408 == 0) {
    uStack_8 = FUN_10015690(param_1);
    FUN_100155d0(uStack_8);
  }
  else {
    iVar2 = FUN_10015690(param_1);
    iVar1 = FUN_10015690(DAT_100313f8);
    if (iVar2 == iVar1) {
      if (DAT_10031408 == 0) {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
    }
    else {
      uStack_c = FUN_10015690(param_1);
      FUN_100155d0(uStack_c);
    }
  }
  uStack_8 = 0x1000177c;
  __chkesp();
  return;
}


/*
 * xvga_init_fileio at 10001023
 * undefined __cdecl xvga_init_fileio(LPCSTR param_1, LPCSTR param_2)
 * Address ranges: 10001023-10001027
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_10001090
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl xvga_init_fileio(LPCSTR param_1,LPCSTR param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_64 [16];
  uint auStack_24 [5];
  undefined4 uStack_10;
  int iStack_c;
  short asStack_8 [2];
  
                    /* 0x1023  5  xvga_init_fileio */
  puVar3 = auStack_64;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((DAT_10031408 == 0) &&
     (DAT_100313f4 = (undefined **)FUN_100022c0(param_1,"rb"), DAT_100313f4 != (undefined **)0x0)) {
    FUN_10001fb0((char *)asStack_8,2,1,DAT_100313f4);
    if (asStack_8[0] < 1) {
      MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
      __chkesp();
    }
    else {
      _DAT_100313fc = (int)asStack_8[0];
      LocalAlloc(0x40,_DAT_100313fc * 0x1c);
      DAT_10031400 = __chkesp();
      if (DAT_10031400 == 0) {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
      else {
        for (iStack_c = 0; iStack_c < _DAT_100313fc; iStack_c = iStack_c + 1) {
          FUN_10001fb0((char *)auStack_24,0x14,1,DAT_100313f4);
          FUN_10001fb0((char *)&uStack_10,1,4,DAT_100313f4);
          FUN_10001ec0((uint *)(DAT_10031400 + iStack_c * 0x1c),auStack_24);
          *(undefined4 *)(DAT_10031400 + 0x14 + iStack_c * 0x1c) = uStack_10;
          if (((uint)DAT_100313f4[3] & 0x20) != 0) {
            MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
            __chkesp();
            goto LAB_1000132e;
          }
        }
        FUN_10001d70(DAT_100313f4);
        DAT_100313f8 = FUN_100022c0(param_2,"rb");
        if (DAT_100313f8 == 0) {
          MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
          __chkesp();
        }
        else {
          uVar1 = FUN_10015690(DAT_100313f8);
          DAT_100313f0 = FUN_100155d0(uVar1);
          for (iStack_c = 0; iStack_c < _DAT_100313fc + -1; iStack_c = iStack_c + 1) {
            *(int *)(DAT_10031400 + 0x18 + iStack_c * 0x1c) =
                 *(int *)(DAT_10031400 + 0x14 + (iStack_c + 1) * 0x1c) -
                 *(int *)(DAT_10031400 + 0x14 + iStack_c * 0x1c);
          }
          *(DWORD *)(DAT_10031400 + 0x18 + iStack_c * 0x1c) =
               DAT_100313f0 - *(int *)(DAT_10031400 + 0x14 + iStack_c * 0x1c);
          DAT_10031408 = 1;
        }
      }
    }
  }
LAB_1000132e:
  asStack_8[0] = 0x133b;
  asStack_8[1] = 0x1000;
  __chkesp();
  return;
}


/*
 * xvga_file_exist at 10001028
 * undefined __cdecl xvga_file_exist(byte * param_1)
 * Address ranges: 10001028-1000102c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_10001a30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl xvga_file_exist(byte *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_4c [16];
  undefined **ppuStack_c;
  int iStack_8;
  
                    /* 0x1028  2  xvga_file_exist */
  puVar3 = auStack_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((DAT_10031408 == 0) || (DAT_1003140c == 1)) {
    ppuStack_c = (undefined **)FUN_100022c0((LPCSTR)param_1,"rb");
    if (ppuStack_c != (undefined **)0x0) {
      FUN_10001d70(ppuStack_c);
    }
  }
  else {
    for (iStack_8 = 0; iStack_8 < _DAT_100313fc; iStack_8 = iStack_8 + 1) {
      uVar1 = FUN_100134c0((byte *)(DAT_10031400 + iStack_8 * 0x1c),param_1);
      if (uVar1 == 0) goto LAB_10001b01;
    }
    ppuStack_c = (undefined **)FUN_100022c0((LPCSTR)param_1,"rb");
    if (ppuStack_c != (undefined **)0x0) {
      FUN_10001d70(ppuStack_c);
    }
  }
LAB_10001b01:
  iStack_8 = 0x10001b0e;
  __chkesp();
  return;
}


/*
 * xvga_get_filehandle at 1000102d
 * undefined __cdecl xvga_get_filehandle(int param_1)
 * Address ranges: 1000102d-10001031
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_10001d10
 */


void __cdecl xvga_get_filehandle(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_44 [15];
  undefined4 uStack_8;
  
                    /* 0x102d  4  xvga_get_filehandle */
  puVar2 = auStack_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  FUN_10002850(*(uint *)(param_1 + 0x10));
  uStack_8 = 0x10001d44;
  __chkesp();
  return;
}


/*
 * xvga_rc_filelength at 10001032
 * undefined4 __cdecl xvga_rc_filelength(int param_1)
 * Address ranges: 10001032-10001036
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_10001cd0
 */


undefined4 __cdecl xvga_rc_filelength(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_44 [16];
  
                    /* 0x1032  6  xvga_rc_filelength */
  puVar2 = auStack_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return *(undefined4 *)(DAT_10031400 + 0x18 + param_1 * 0x1c);
}


/*
 * xvga_rc_filename at 10001037
 * undefined __cdecl xvga_rc_filename(int param_1, uint * param_2)
 * Address ranges: 10001037-1000103b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_10001c30
 */


void __cdecl xvga_rc_filename(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_44 [15];
  undefined4 uStack_8;
  
                    /* 0x1037  7  xvga_rc_filename */
  puVar2 = auStack_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  FUN_10001ec0(param_2,(uint *)(DAT_10031400 + param_1 * 0x1c));
  uStack_8 = 0x10001c70;
  __chkesp();
  return;
}


/*
 * xvga_src_fclose at 1000103c
 * undefined __cdecl xvga_src_fclose(undefined * * param_1)
 * Address ranges: 1000103c-10001040
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_10001940
 */


void __cdecl xvga_src_fclose(undefined **param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_44 [15];
  undefined4 uStack_8;
  
                    /* 0x103c  10  xvga_src_fclose */
  puVar3 = auStack_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_1 == (undefined **)0x0) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  else if (DAT_10031408 == 0) {
    FUN_10001d70(param_1);
  }
  else {
    iVar2 = FUN_10015690((int)param_1);
    iVar1 = FUN_10015690(DAT_100313f8);
    if (iVar2 == iVar1) {
      if (DAT_10031408 == 0) {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
    }
    else {
      FUN_10001d70(param_1);
    }
  }
  uStack_8 = 0x100019f8;
  __chkesp();
  return;
}


/*
 * xvga_rc_num_files at 10001041
 * undefined4 __stdcall xvga_rc_num_files(void)
 * Address ranges: 10001041-10001045
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_10001c00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 xvga_rc_num_files(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_44 [16];
  
                    /* 0x1041  9  xvga_rc_num_files */
  puVar2 = auStack_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return _DAT_100313fc;
}


/*
 * FUN_10001090 at 10001090
 * undefined __cdecl FUN_10001090(LPCSTR param_1, LPCSTR param_2)
 * Address ranges: 10001090-1000133e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10001090(LPCSTR param_1,LPCSTR param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_64 [16];
  uint local_24 [5];
  undefined4 local_10;
  int local_c;
  short local_8 [2];
  
  puVar3 = local_64;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((DAT_10031408 == 0) &&
     (DAT_100313f4 = (undefined **)FUN_100022c0(param_1,"rb"), DAT_100313f4 != (undefined **)0x0)) {
    FUN_10001fb0((char *)local_8,2,1,DAT_100313f4);
    if (local_8[0] < 1) {
      MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
      __chkesp();
    }
    else {
      _DAT_100313fc = (int)local_8[0];
      LocalAlloc(0x40,_DAT_100313fc * 0x1c);
      DAT_10031400 = __chkesp();
      if (DAT_10031400 == 0) {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
      else {
        for (local_c = 0; local_c < _DAT_100313fc; local_c = local_c + 1) {
          FUN_10001fb0((char *)local_24,0x14,1,DAT_100313f4);
          FUN_10001fb0((char *)&local_10,1,4,DAT_100313f4);
          FUN_10001ec0((uint *)(DAT_10031400 + local_c * 0x1c),local_24);
          *(undefined4 *)(DAT_10031400 + 0x14 + local_c * 0x1c) = local_10;
          if (((uint)DAT_100313f4[3] & 0x20) != 0) {
            MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
            __chkesp();
            goto LAB_1000132e;
          }
        }
        FUN_10001d70(DAT_100313f4);
        DAT_100313f8 = FUN_100022c0(param_2,"rb");
        if (DAT_100313f8 == 0) {
          MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
          __chkesp();
        }
        else {
          uVar1 = FUN_10015690(DAT_100313f8);
          DAT_100313f0 = FUN_100155d0(uVar1);
          for (local_c = 0; local_c < _DAT_100313fc + -1; local_c = local_c + 1) {
            *(int *)(DAT_10031400 + 0x18 + local_c * 0x1c) =
                 *(int *)(DAT_10031400 + 0x14 + (local_c + 1) * 0x1c) -
                 *(int *)(DAT_10031400 + 0x14 + local_c * 0x1c);
          }
          *(DWORD *)(DAT_10031400 + 0x18 + local_c * 0x1c) =
               DAT_100313f0 - *(int *)(DAT_10031400 + 0x14 + local_c * 0x1c);
          DAT_10031408 = 1;
        }
      }
    }
  }
LAB_1000132e:
  local_8[0] = 0x133b;
  local_8[1] = 0x1000;
  __chkesp();
  return;
}


/*
 * FUN_100013f0 at 100013f0
 * undefined __cdecl FUN_100013f0(int param_1)
 * Address ranges: 100013f0-10001454
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100013f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  int local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  if ((param_1 < 0) || (1 < param_1)) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  else {
    DAT_1003140c = param_1;
  }
  local_8 = 0x10001451;
  __chkesp();
  return;
}


/*
 * FUN_10001470 at 10001470
 * undefined __cdecl FUN_10001470(undefined * * param_1, int param_2, DWORD param_3)
 * Address ranges: 10001470-1000162f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10001470(undefined **param_1,int param_2,DWORD param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [16];
  DWORD local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_1 == (undefined **)0x0) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  if (DAT_10031408 == 0) {
    FUN_10002320(param_1,param_2,param_3);
  }
  else {
    iVar2 = FUN_10015690((int)param_1);
    iVar1 = FUN_10015690((int)DAT_100313f8);
    if (iVar2 == iVar1) {
      local_8 = param_3;
      if (param_3 == 0) {
        if ((DAT_100313f0 < DAT_10031404 + param_2) || (DAT_10031404 + param_2 < DAT_10031404)) {
          MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
          __chkesp();
        }
        else {
          FUN_10002320(DAT_100313f8,DAT_10031404 + param_2,0);
        }
      }
      else if (param_3 == 1) {
        FUN_10002320(DAT_100313f8,DAT_10031404 + param_2,0);
      }
      else if (param_3 == 2) {
        if (DAT_100313f0 < DAT_100313f0 + param_2) {
          MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
          __chkesp();
        }
        else {
          FUN_10002320(DAT_100313f8,DAT_100313f0 + param_2,0);
        }
      }
      else {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
    }
    else {
      FUN_10002320(param_1,param_2,param_3);
    }
  }
  local_8 = 0x1000162c;
  __chkesp();
  return;
}


/*
 * FUN_100016a0 at 100016a0
 * undefined __cdecl FUN_100016a0(int param_1)
 * Address ranges: 100016a0-1000177f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100016a0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  uint local_c;
  uint local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_1 == 0) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  if (DAT_10031408 == 0) {
    local_8 = FUN_10015690(param_1);
    FUN_100155d0(local_8);
  }
  else {
    iVar2 = FUN_10015690(param_1);
    iVar1 = FUN_10015690(DAT_100313f8);
    if (iVar2 == iVar1) {
      if (DAT_10031408 == 0) {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
    }
    else {
      local_c = FUN_10015690(param_1);
      FUN_100155d0(local_c);
    }
  }
  local_8 = 0x1000177c;
  __chkesp();
  return;
}


/*
 * FUN_100017c0 at 100017c0
 * undefined __cdecl FUN_100017c0(byte * param_1)
 * Address ranges: 100017c0-100018ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100017c0(byte *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_58 [16];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  short local_c;
  int local_8;
  
  puVar3 = local_58;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((DAT_10031408 == 0) || (DAT_1003140c == 1)) {
    local_10 = FUN_100022c0((LPCSTR)param_1,"rb");
  }
  else {
    for (local_8 = 0; local_8 < _DAT_100313fc; local_8 = local_8 + 1) {
      uVar1 = FUN_100134c0((byte *)(DAT_10031400 + local_8 * 0x1c),param_1);
      if (uVar1 == 0) {
        DAT_10031404 = *(int *)(DAT_10031400 + 0x14 + local_8 * 0x1c);
        DAT_100313f0 = DAT_10031404 + *(int *)(DAT_10031400 + 0x18 + local_8 * 0x1c);
        break;
      }
    }
    local_c = DAT_100313fc;
    if (local_8 == DAT_100313fc) {
      local_14 = FUN_100022c0((LPCSTR)param_1,"rb");
    }
    else {
      local_18 = FUN_10002320(DAT_100313f8,DAT_10031404,0);
    }
  }
  local_8 = 0x100018e7;
  __chkesp();
  return;
}


/*
 * FUN_10001940 at 10001940
 * undefined __cdecl FUN_10001940(undefined * * param_1)
 * Address ranges: 10001940-100019fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10001940(undefined **param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar3 = local_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_1 == (undefined **)0x0) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  else if (DAT_10031408 == 0) {
    FUN_10001d70(param_1);
  }
  else {
    iVar2 = FUN_10015690((int)param_1);
    iVar1 = FUN_10015690(DAT_100313f8);
    if (iVar2 == iVar1) {
      if (DAT_10031408 == 0) {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
    }
    else {
      FUN_10001d70(param_1);
    }
  }
  uStack_8 = 0x100019f8;
  __chkesp();
  return;
}


/*
 * FUN_10001a30 at 10001a30
 * undefined __cdecl FUN_10001a30(byte * param_1)
 * Address ranges: 10001a30-10001b11
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10001a30(byte *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  undefined **local_c;
  int local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((DAT_10031408 == 0) || (DAT_1003140c == 1)) {
    local_c = (undefined **)FUN_100022c0((LPCSTR)param_1,"rb");
    if (local_c != (undefined **)0x0) {
      FUN_10001d70(local_c);
    }
  }
  else {
    for (local_8 = 0; local_8 < _DAT_100313fc; local_8 = local_8 + 1) {
      uVar1 = FUN_100134c0((byte *)(DAT_10031400 + local_8 * 0x1c),param_1);
      if (uVar1 == 0) goto LAB_10001b01;
    }
    local_c = (undefined **)FUN_100022c0((LPCSTR)param_1,"rb");
    if (local_c != (undefined **)0x0) {
      FUN_10001d70(local_c);
    }
  }
LAB_10001b01:
  local_8 = 0x10001b0e;
  __chkesp();
  return;
}


/*
 * FUN_10001b50 at 10001b50
 * undefined __stdcall FUN_10001b50(void)
 * Address ranges: 10001b50-10001bd2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10001b50(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (DAT_10031408 != 0) {
    LocalFree(DAT_10031400);
    iVar1 = __chkesp();
    if (iVar1 == 0) {
      FUN_10001d70(DAT_100313f8);
      DAT_10031408 = 0;
    }
    else {
      MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
      __chkesp();
    }
  }
  uStack_8 = 0x10001bcf;
  __chkesp();
  return;
}


/*
 * FUN_10001c00 at 10001c00
 * undefined4 __stdcall FUN_10001c00(void)
 * Address ranges: 10001c00-10001c23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10001c00(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return _DAT_100313fc;
}


/*
 * FUN_10001c30 at 10001c30
 * undefined __cdecl FUN_10001c30(int param_1, uint * param_2)
 * Address ranges: 10001c30-10001c73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10001c30(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  FUN_10001ec0(param_2,(uint *)(DAT_10031400 + param_1 * 0x1c));
  uStack_8 = 0x10001c70;
  __chkesp();
  return;
}


/*
 * FUN_10001c90 at 10001c90
 * undefined4 __cdecl FUN_10001c90(int param_1)
 * Address ranges: 10001c90-10001cbe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10001c90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return *(undefined4 *)(DAT_10031400 + 0x14 + param_1 * 0x1c);
}


/*
 * FUN_10001cd0 at 10001cd0
 * undefined4 __cdecl FUN_10001cd0(int param_1)
 * Address ranges: 10001cd0-10001cfe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10001cd0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return *(undefined4 *)(DAT_10031400 + 0x18 + param_1 * 0x1c);
}


/*
 * FUN_10001d10 at 10001d10
 * undefined __cdecl FUN_10001d10(int param_1)
 * Address ranges: 10001d10-10001d47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10001d10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  FUN_10002850(*(uint *)(param_1 + 0x10));
  uStack_8 = 0x10001d44;
  __chkesp();
  return;
}


/*
 * FUN_10001d70 at 10001d70
 * undefined4 __cdecl FUN_10001d70(undefined * * param_1)
 * Address ranges: 10001d70-10001df1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10001d70(undefined **param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002c038,0x3a,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (((uint)param_1[3] & 0x40) == 0) {
    FUN_10002e60(param_1);
    local_8 = FUN_10001e00((int *)param_1);
    FUN_10002ed0(param_1);
  }
  else {
    param_1[3] = (undefined *)0x0;
  }
  return local_8;
}


/*
 * FUN_10001e00 at 10001e00
 * undefined4 __cdecl FUN_10001e00(int * param_1)
 * Address ranges: 10001e00-10001ebd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10001e00(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if ((param_1 == (int *)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002c038,0x77,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((param_1[3] & 0x83U) != 0) {
    local_8 = FUN_100058f0(param_1);
    FUN_100057b0(param_1);
    iVar2 = FUN_10005680(param_1[4]);
    if (iVar2 < 0) {
      local_8 = 0xffffffff;
    }
    else if (param_1[7] != 0) {
      FUN_100041a0((void *)param_1[7],2);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return local_8;
}


/*
 * FUN_10001ec0 at 10001ec0
 * uint * __cdecl FUN_10001ec0(uint * param_1, uint * param_2)
 * Address ranges: 10001ec0-10001ec6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint * __cdecl FUN_10001ec0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = param_1;
  while (((uint)param_2 & 3) != 0) {
    bVar1 = (byte)*param_2;
    uVar3 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_10001fa8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10001fa8:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}


/*
 * FUN_10001ed0 at 10001ed0
 * uint * __cdecl FUN_10001ed0(uint * param_1, uint * param_2)
 * Address ranges: 10001ed0-10001faf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint * __cdecl FUN_10001ed0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10001eec;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10001f1f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x10001f3b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10001eec:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10001f3b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x10001f3b;
    }
  }
LAB_10001f1f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x10001f3b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10001fa8:
            *(byte *)puVar5 = (byte)uVar4;
            return param_1;
          }
          if ((char)(uVar4 >> 8) == '\0') {
            *(short *)puVar5 = (short)uVar4;
            return param_1;
          }
          if ((uVar4 & 0xff0000) == 0) {
            *(short *)puVar5 = (short)uVar4;
            *(byte *)((int)puVar5 + 2) = 0;
            return param_1;
          }
          if ((uVar4 & 0xff000000) == 0) {
            *puVar5 = uVar4;
            return param_1;
          }
        }
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while( true );
    }
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_10001fa8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}


/*
 * FUN_10001fb0 at 10001fb0
 * uint __cdecl FUN_10001fb0(char * param_1, uint param_2, uint param_3, undefined * * param_4)
 * Address ranges: 10001fb0-10001fed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_10001fb0(char *param_1,uint param_2,uint param_3,undefined **param_4)

{
  uint uVar1;
  
  FUN_10002e60(param_4);
  uVar1 = FUN_10001ff0(param_1,param_2,param_3,(int *)param_4);
  FUN_10002ed0(param_4);
  return uVar1;
}


/*
 * FUN_10001ff0 at 10001ff0
 * uint __cdecl FUN_10001ff0(char * param_1, uint param_2, uint param_3, int * param_4)
 * Address ranges: 10001ff0-100021be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_10001ff0(char *param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  DWORD local_28;
  uint local_24;
  uint local_20;
  uint local_10;
  char *local_c;
  char local_8;
  
  local_c = param_1;
  uVar3 = param_2 * param_3;
  if (uVar3 == 0) {
    param_3 = 0;
  }
  else {
    local_10 = uVar3;
    if ((param_4[3] & 0x10cU) == 0) {
      local_20 = 0x1000;
    }
    else {
      local_20 = param_4[6];
    }
    while (local_10 != 0) {
      if (((param_4[3] & 0x10cU) == 0) || (param_4[1] == 0)) {
        if (local_10 < local_20) {
          uVar2 = FUN_10005b00(param_4);
          if (uVar2 == 0xffffffff) {
            return (uVar3 - local_10) / param_2;
          }
          local_8 = (char)uVar2;
          *local_c = local_8;
          local_c = local_c + 1;
          local_10 = local_10 - 1;
          local_20 = param_4[6];
        }
        else {
          if (local_20 == 0) {
            local_28 = local_10;
          }
          else {
            local_28 = local_10 - local_10 % local_20;
          }
          iVar1 = FUN_10005cf0(param_4[4],local_c,local_28);
          if (iVar1 == 0) {
            param_4[3] = param_4[3] | 0x10;
            return (uVar3 - local_10) / param_2;
          }
          if (iVar1 == -1) {
            param_4[3] = param_4[3] | 0x20;
            return (uVar3 - local_10) / param_2;
          }
          local_10 = local_10 - iVar1;
          local_c = local_c + iVar1;
        }
      }
      else {
        if (local_10 < (uint)param_4[1]) {
          local_24 = local_10;
        }
        else {
          local_24 = param_4[1];
        }
        FUN_100061d0((undefined4 *)local_c,(undefined4 *)*param_4,local_24);
        local_10 = local_10 - local_24;
        param_4[1] = param_4[1] - local_24;
        *param_4 = *param_4 + local_24;
        local_c = local_c + local_24;
      }
    }
  }
  return param_3;
}


/*
 * FUN_100021c0 at 100021c0
 * undefined4 * __cdecl FUN_100021c0(LPCSTR param_1, char * param_2, undefined4 param_3)
 * Address ranges: 100021c0-100022bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * __cdecl FUN_100021c0(LPCSTR param_1,char *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  
  if ((param_1 == (LPCSTR)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002c098,0x35,0,(byte *)"file != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  if ((*param_1 == '\0') &&
     (iVar2 = FUN_10003050(2,0x1002c098,0x36,0,(byte *)"*file != _T(\'\\0\')"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  if ((param_2 == (char *)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002c098,0x37,0,(byte *)"mode != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  if ((*param_2 == '\0') &&
     (iVar2 = FUN_10003050(2,0x1002c098,0x38,0,(byte *)"*mode != _T(\'\\0\')"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  ppuVar4 = (undefined **)FUN_100068a0();
  if (ppuVar4 == (undefined **)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_10006510(param_1,param_2,param_3,ppuVar4);
    FUN_10002ed0(ppuVar4);
  }
  return puVar3;
}


/*
 * FUN_100022c0 at 100022c0
 * undefined __cdecl FUN_100022c0(LPCSTR param_1, char * param_2)
 * Address ranges: 100022c0-100022d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100022c0(LPCSTR param_1,char *param_2)

{
  FUN_100021c0(param_1,param_2,0x40);
  return;
}


/*
 * __chkesp at 100022e0
 * undefined4 __stdcall __chkesp(void)
 * Address ranges: 100022e0-10002317
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __chkesp  Library: Visual Studio
 */


/* Library Function - Single Match
    __chkesp
   
   Library: Visual Studio */

undefined4 __chkesp(void)

{
  code *pcVar1;
  undefined4 in_EAX;
  int iVar2;
  undefined4 uVar3;
  bool in_ZF;
  
  if (in_ZF) {
    return in_EAX;
  }
  iVar2 = FUN_10003050(1,0x1002c0b0,0x2a,&DAT_1002c0c0,
                       (byte *)
                       "The value of ESP was not properly saved across a function call.  This is usually a result of calling a function declared with one calling convention with a function pointer declared with a different calling convention. "
                      );
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return in_EAX;
}


/*
 * FUN_10002320 at 10002320
 * int __cdecl FUN_10002320(undefined * * param_1, int param_2, DWORD param_3)
 * Address ranges: 10002320-10002389
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10002320(undefined **param_1,int param_2,DWORD param_3)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002c1a0,0x65,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_10002e60(param_1);
  iVar2 = FUN_10002390((uint *)param_1,param_2,param_3);
  FUN_10002ed0(param_1);
  return iVar2;
}


/*
 * FUN_10002390 at 10002390
 * int __cdecl FUN_10002390(uint * param_1, int param_2, DWORD param_3)
 * Address ranges: 10002390-100024b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10002390(uint *param_1,int param_2,DWORD param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  
  if ((param_1 == (uint *)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002c1a0,0x92,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if (((param_1[3] & 0x83) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    puVar3 = (undefined4 *)FUN_10006f20();
    *puVar3 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1[3] = param_1[3] & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = FUN_10006be0(param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_100058f0((int *)param_1);
    if ((param_1[3] & 0x80) == 0) {
      if ((((param_1[3] & 1) != 0) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = param_1[3] & 0xfffffffc;
    }
    DVar4 = FUN_10006a20(param_1[4],param_2,param_3);
    iVar2 = (DVar4 != 0xffffffff) - 1;
  }
  return iVar2;
}


/*
 * FUN_100024c0 at 100024c0
 * uint __stdcall FUN_100024c0(void)
 * Address ranges: 100024c0-100026a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint FUN_100024c0(void)

{
  int local_10;
  uint local_c;
  undefined4 *local_8;
  
  local_c = 0xffffffff;
  FUN_100073f0(0x12);
  local_10 = 0;
  do {
    if (0x3f < local_10) {
LAB_10002690:
      FUN_10007490(0x12);
      return local_c;
    }
    if ((&DAT_10031ac0)[local_10] == 0) {
      local_8 = (undefined4 *)FUN_10003710((void *)0x480,2,0x1002c1a8,0x79);
      if (local_8 != (undefined4 *)0x0) {
        (&DAT_10031ac0)[local_10] = local_8;
        DAT_10031bfc = DAT_10031bfc + 0x20;
        for (; local_8 < (undefined4 *)((&DAT_10031ac0)[local_10] + 0x480); local_8 = local_8 + 9) {
          *(undefined1 *)(local_8 + 1) = 0;
          *local_8 = 0xffffffff;
          *(undefined1 *)((int)local_8 + 5) = 10;
          local_8[2] = 0;
        }
        local_c = local_10 << 5;
        FUN_100029d0(local_c);
      }
      goto LAB_10002690;
    }
    for (local_8 = (undefined4 *)(&DAT_10031ac0)[local_10];
        local_8 < (undefined4 *)((&DAT_10031ac0)[local_10] + 0x480); local_8 = local_8 + 9) {
      if ((*(byte *)(local_8 + 1) & 1) == 0) {
        if (local_8[2] == 0) {
          FUN_100073f0(0x11);
          if (local_8[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
            local_8[2] = local_8[2] + 1;
          }
          FUN_10007490(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
        if ((*(byte *)(local_8 + 1) & 1) == 0) {
          *local_8 = 0xffffffff;
          local_c = local_10 * 0x20 + ((int)local_8 - (&DAT_10031ac0)[local_10]) / 0x24;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
      }
    }
    if (local_c != 0xffffffff) goto LAB_10002690;
    local_10 = local_10 + 1;
  } while( true );
}


/*
 * __set_osfhnd at 100026b0
 * int __cdecl __set_osfhnd(int param_1, intptr_t param_2)
 * Address ranges: 100026b0-10002766
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __set_osfhnd  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __set_osfhnd
   
   Library: Visual Studio 2003 Debug */

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  int iVar1;
  undefined4 *puVar2;
  DWORD *pDVar3;
  
  if (((uint)param_1 < DAT_10031bfc) &&
     (*(int *)((&DAT_10031ac0)[param_1 >> 5] + (param_1 & 0x1fU) * 0x24) == -1)) {
    if (DAT_10031428 == 1) {
      if (param_1 == 0) {
        SetStdHandle(0xfffffff6,(HANDLE)param_2);
      }
      else if (param_1 == 1) {
        SetStdHandle(0xfffffff5,(HANDLE)param_2);
      }
      else if (param_1 == 2) {
        SetStdHandle(0xfffffff4,(HANDLE)param_2);
      }
    }
    *(intptr_t *)((&DAT_10031ac0)[param_1 >> 5] + (param_1 & 0x1fU) * 0x24) = param_2;
    iVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_10006f20();
    *puVar2 = 9;
    pDVar3 = FUN_10006f30();
    *pDVar3 = 0;
    iVar1 = -1;
  }
  return iVar1;
}


/*
 * FUN_10002770 at 10002770
 * undefined4 __cdecl FUN_10002770(uint param_1)
 * Address ranges: 10002770-10002847
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10002770(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  DWORD *pDVar3;
  int iVar4;
  
  if (((param_1 < DAT_10031bfc) &&
      (iVar4 = (int)param_1 >> 5,
      (*(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) &&
     (*(int *)((&DAT_10031ac0)[iVar4] + (param_1 & 0x1f) * 0x24) != -1)) {
    if (DAT_10031428 == 1) {
      if (param_1 == 0) {
        SetStdHandle(0xfffffff6,(HANDLE)0x0);
      }
      else if (param_1 == 1) {
        SetStdHandle(0xfffffff5,(HANDLE)0x0);
      }
      else if (param_1 == 2) {
        SetStdHandle(0xfffffff4,(HANDLE)0x0);
      }
    }
    *(undefined4 *)((&DAT_10031ac0)[iVar4] + (param_1 & 0x1f) * 0x24) = 0xffffffff;
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_10006f20();
    *puVar2 = 9;
    pDVar3 = FUN_10006f30();
    *pDVar3 = 0;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/*
 * FUN_10002850 at 10002850
 * undefined4 __cdecl FUN_10002850(uint param_1)
 * Address ranges: 10002850-100028b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10002850(uint param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  undefined4 uVar3;
  
  if ((param_1 < DAT_10031bfc) &&
     ((*(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    uVar3 = *(undefined4 *)((&DAT_10031ac0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  else {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    pDVar2 = FUN_10006f30();
    *pDVar2 = 0;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/*
 * FUN_100028c0 at 100028c0
 * uint __cdecl FUN_100028c0(HANDLE param_1, uint param_2)
 * Address ranges: 100028c0-100029c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_100028c0(HANDLE param_1,uint param_2)

{
  DWORD DVar1;
  uint _Filehandle;
  undefined4 *puVar2;
  DWORD *pDVar3;
  byte local_10;
  
  local_10 = 0;
  if ((param_2 & 8) != 0) {
    local_10 = 0x20;
  }
  if ((param_2 & 0x4000) != 0) {
    local_10 = local_10 | 0x80;
  }
  if ((param_2 & 0x80) != 0) {
    local_10 = local_10 | 0x10;
  }
  DVar1 = GetFileType(param_1);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    __dosmaperr(DVar1);
    _Filehandle = 0xffffffff;
  }
  else {
    if (DVar1 == 2) {
      local_10 = local_10 | 0x40;
    }
    else if (DVar1 == 3) {
      local_10 = local_10 | 8;
    }
    _Filehandle = FUN_100024c0();
    if (_Filehandle == 0xffffffff) {
      puVar2 = (undefined4 *)FUN_10006f20();
      *puVar2 = 0x18;
      pDVar3 = FUN_10006f30();
      *pDVar3 = 0;
      _Filehandle = 0xffffffff;
    }
    else {
      __set_osfhnd(_Filehandle,(intptr_t)param_1);
      *(byte *)((&DAT_10031ac0)[(int)_Filehandle >> 5] + 4 + (_Filehandle & 0x1f) * 0x24) =
           local_10 | 1;
      __unlock_fhandle(_Filehandle);
    }
  }
  return _Filehandle;
}


/*
 * FUN_100029d0 at 100029d0
 * undefined __cdecl FUN_100029d0(uint param_1)
 * Address ranges: 100029d0-10002a55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100029d0(uint param_1)

{
  int iVar1;
  
  iVar1 = (&DAT_10031ac0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_100073f0(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_10007490(0x11);
  }
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10031ac0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}


/*
 * __unlock_fhandle at 10002a60
 * void __cdecl __unlock_fhandle(int _Filehandle)
 * Address ranges: 10002a60-10002a85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __unlock_fhandle  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2003 Debug */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10031ac0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x24));
  return;
}


/*
 * FUN_10002a90 at 10002a90
 * undefined4 __stdcall FUN_10002a90(undefined4 param_1, int param_2)
 * Address ranges: 10002a90-10002bc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10002a90(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 1) {
    DAT_100314ac = GetVersion();
    iVar1 = FUN_10008200(1);
    if (iVar1 == 0) {
      return 0;
    }
    _DAT_100314b8 = DAT_100314ac >> 8 & 0xff;
    DAT_100314b4 = DAT_100314ac & 0xff;
    _DAT_100314b0 = DAT_100314b4 * 0x100 + _DAT_100314b8;
    DAT_100314ac = DAT_100314ac >> 0x10;
    iVar1 = FUN_100076d0();
    if (iVar1 == 0) {
      FUN_10008250();
      return 0;
    }
    DAT_10032f64 = GetCommandLineA();
    DAT_1003141c = FUN_10007fe0();
    FUN_10006f40();
    FUN_10007ad0();
    FUN_10007980();
    FUN_100074d0();
    DAT_10031418 = DAT_10031418 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_10031418 < 1) {
      return 0;
    }
    DAT_10031418 = DAT_10031418 + -1;
    if (DAT_100314e4 == 0) {
      FUN_10007550();
    }
    uVar2 = FUN_10004c20(-1);
    if ((uVar2 & 0x20) != 0) {
      FUN_10005530();
    }
    __ioterm();
    FUN_10007760();
    FUN_10008250();
  }
  else if (param_2 == 3) {
    FUN_10007850((LPVOID)0x0);
  }
  return 1;
}


/*
 * entry at 10002bd0
 * int __stdcall entry(undefined4 param_1, int param_2, undefined4 param_3)
 * Address ranges: 10002bd0-10002cc2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_8;
  
  local_8 = 1;
  if ((param_2 == 0) && (DAT_10031418 == 0)) {
    local_8 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (DAT_10032f74 != (code *)0x0) {
        local_8 = (*DAT_10032f74)(param_1,param_2,param_3);
      }
      if (local_8 != 0) {
        local_8 = FUN_10002a90(param_1,param_2);
      }
      if (local_8 == 0) {
        return 0;
      }
    }
    local_8 = FUN_100082f0();
    if ((param_2 == 1) && (local_8 == 0)) {
      FUN_10002a90(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = FUN_10002a90(param_1,param_2);
      if (iVar1 == 0) {
        local_8 = 0;
      }
      if ((local_8 != 0) && (DAT_10032f74 != (code *)0x0)) {
        local_8 = (*DAT_10032f74)(param_1,param_2,param_3);
      }
    }
  }
  return local_8;
}


/*
 * __amsg_exit at 10002cd0
 * void __cdecl __amsg_exit(int param_1)
 * Address ranges: 10002cd0-10002d09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10031424 == 1) || ((DAT_10031424 == 0 && (DAT_10031428 == 1)))) {
    __FF_MSGBANNER();
  }
  FUN_10008350(param_1);
  (*(code *)PTR___exit_1002fa30)(0xff);
  return;
}


/*
 * FUN_10002d10 at 10002d10
 * undefined __stdcall FUN_10002d10(void)
 * Address ranges: 10002d10-10002e3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10002d10(void)

{
  uint local_8;
  
  if (DAT_10032f60 == 0) {
    DAT_10032f60 = 0x200;
  }
  else if (DAT_10032f60 < 0x14) {
    DAT_10032f60 = 0x14;
  }
  DAT_10031c18 = __calloc_dbg(DAT_10032f60,4,2,"_file.c",0x83);
  if (DAT_10031c18 == (undefined1 *)0x0) {
    DAT_10032f60 = 0x14;
    DAT_10031c18 = __calloc_dbg(0x14,4,2,"_file.c",0x86);
    if (DAT_10031c18 == (undefined1 *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  for (local_8 = 0; (int)local_8 < 0x14; local_8 = local_8 + 1) {
    *(undefined ***)(DAT_10031c18 + local_8 * 4) = &PTR_DAT_1002fa38 + local_8 * 8;
  }
  for (local_8 = 0; (int)local_8 < 3; local_8 = local_8 + 1) {
    if ((*(int *)((&DAT_10031ac0)[(int)local_8 >> 5] + (local_8 & 0x1f) * 0x24) == -1) ||
       (*(int *)((&DAT_10031ac0)[(int)local_8 >> 5] + (local_8 & 0x1f) * 0x24) == 0)) {
      *(undefined4 *)(&DAT_1002fa48 + local_8 * 0x20) = 0xffffffff;
    }
  }
  return;
}


/*
 * FUN_10002e40 at 10002e40
 * undefined __stdcall FUN_10002e40(void)
 * Address ranges: 10002e40-10002e59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10002e40(void)

{
  FUN_100059b0();
  if (DAT_100314e0 != '\0') {
    FUN_10008560();
  }
  return;
}


/*
 * FUN_10002e60 at 10002e60
 * undefined __cdecl FUN_10002e60(undefined * * param_1)
 * Address ranges: 10002e60-10002e9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10002e60(undefined **param_1)

{
  if ((param_1 < &PTR_DAT_1002fa38) || (&DAT_1002fc98 < param_1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  else {
    FUN_100073f0(((int)(param_1 + -0x400be8e) >> 5) + 0x1c);
  }
  return;
}


/*
 * FUN_10002ea0 at 10002ea0
 * undefined __cdecl FUN_10002ea0(int param_1, int param_2)
 * Address ranges: 10002ea0-10002ec8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10002ea0(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_100073f0(param_1 + 0x1c);
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  }
  return;
}


/*
 * FUN_10002ed0 at 10002ed0
 * undefined __cdecl FUN_10002ed0(undefined * * param_1)
 * Address ranges: 10002ed0-10002f0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10002ed0(undefined **param_1)

{
  if ((param_1 < &PTR_DAT_1002fa38) || (&DAT_1002fc98 < param_1)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  else {
    FUN_10007490(((int)(param_1 + -0x400be8e) >> 5) + 0x1c);
  }
  return;
}


/*
 * FUN_10002f10 at 10002f10
 * undefined __cdecl FUN_10002f10(int param_1, int param_2)
 * Address ranges: 10002f10-10002f38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10002f10(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10007490(param_1 + 0x1c);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  }
  return;
}


/*
 * FUN_10002f40 at 10002f40
 * undefined __stdcall FUN_10002f40(void)
 * Address ranges: 10002f40-10002f4a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10002f40(void)

{
  DebugBreak();
  return;
}


/*
 * FUN_10002f50 at 10002f50
 * undefined4 __cdecl FUN_10002f50(int param_1, uint param_2)
 * Address ranges: 10002f50-10002fa6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10002f50(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (2 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else if (param_2 == 0xffffffff) {
    uVar1 = *(undefined4 *)(&DAT_1002fcbc + param_1 * 4);
  }
  else if ((param_2 & 0xfffffff8) == 0) {
    uVar1 = *(undefined4 *)(&DAT_1002fcbc + param_1 * 4);
    *(uint *)(&DAT_1002fcbc + param_1 * 4) = param_2;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/*
 * __CrtSetReportFile at 10002fb0
 * undefined4 __cdecl __CrtSetReportFile(int param_1, int param_2)
 * Address ranges: 10002fb0-1000302d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __CrtSetReportFile  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __CrtSetReportFile
   
   Library: Visual Studio 2003 Debug */

undefined4 __cdecl __CrtSetReportFile(int param_1,int param_2)

{
  undefined4 uVar1;
  HANDLE pvVar2;
  
  if ((param_1 < 0) || (2 < param_1)) {
    uVar1 = 0xfffffffe;
  }
  else if (param_2 == -6) {
    uVar1 = *(undefined4 *)(&DAT_1002fcc8 + param_1 * 4);
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_1002fcc8 + param_1 * 4);
    if (param_2 == -4) {
      pvVar2 = GetStdHandle(0xfffffff5);
      *(HANDLE *)(&DAT_1002fcc8 + param_1 * 4) = pvVar2;
    }
    else if (param_2 == -5) {
      pvVar2 = GetStdHandle(0xfffffff4);
      *(HANDLE *)(&DAT_1002fcc8 + param_1 * 4) = pvVar2;
    }
    else {
      *(int *)(&DAT_1002fcc8 + param_1 * 4) = param_2;
    }
  }
  return uVar1;
}


/*
 * FUN_10003030 at 10003030
 * undefined4 __cdecl FUN_10003030(undefined4 param_1)
 * Address ranges: 10003030-1000304b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10003030(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_10031c0c;
  DAT_10031c0c = param_1;
  return uVar1;
}


/*
 * FUN_10003050 at 10003050
 * undefined4 __cdecl FUN_10003050(int param_1, int param_2, int param_3, undefined4 param_4, byte * param_5)
 * Address ranges: 10003050-100033df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl
FUN_10003050(int param_1,int param_2,int param_3,undefined4 param_4,byte *param_5)

{
  bool bVar1;
  LONG LVar2;
  size_t nNumberOfBytesToWrite;
  undefined3 extraout_var;
  int iVar3;
  undefined4 *puVar4;
  uint *local_302c;
  char local_3028 [20];
  DWORD local_3014;
  HMODULE local_3010;
  undefined1 local_300c;
  undefined4 local_300b;
  undefined1 local_200c;
  undefined4 local_200b;
  undefined4 local_100c;
  undefined4 *local_1008;
  undefined1 local_1004;
  undefined4 local_1003;
  undefined4 uStackY_24;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  
  FUN_10008bb0();
  local_300c = 0;
  puVar4 = &local_300b;
  for (iVar3 = 0x3ff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  local_200c = '\0';
  puVar4 = &local_200b;
  for (iVar3 = 0x3ff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  local_1004 = 0;
  puVar4 = &local_1003;
  for (iVar3 = 0x3ff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  local_1008 = (undefined4 *)&stack0x00000018;
  if ((param_1 < 0) || (2 < param_1)) {
    local_100c = 0xffffffff;
  }
  else if ((param_1 == 2) && (LVar2 = InterlockedIncrement((LONG *)&DAT_1002fcb8), 0 < LVar2)) {
    if ((DAT_10031430 == (FARPROC)0x0) &&
       ((local_3010 = LoadLibraryA("user32.dll"), local_3010 == (HMODULE)0x0 ||
        (DAT_10031430 = GetProcAddress(local_3010,"wsprintfA"), DAT_10031430 == (FARPROC)0x0)))) {
      local_100c = 0xffffffff;
    }
    else {
      (*DAT_10031430)();
      OutputDebugStringA(&local_200c);
      InterlockedDecrement((LONG *)&DAT_1002fcb8);
      FUN_10002f40();
      local_100c = 0xffffffff;
    }
  }
  else {
    if ((param_5 != (byte *)0x0) &&
       (iVar3 = FUN_10008ab0(&local_1004,0xfed,param_5,local_1008), iVar3 < 0)) {
      FUN_10001ec0((uint *)&local_1004,(uint *)"_CrtDbgReport: String too long or IO Error");
    }
    if (param_1 == 2) {
      if (param_5 == (byte *)0x0) {
        local_302c = (uint *)0x1002c1f4;
      }
      else {
        local_302c = (uint *)0x1002c208;
      }
      FUN_10001ec0((uint *)&local_300c,local_302c);
    }
    FUN_10001ed0((uint *)&local_300c,(uint *)&local_1004);
    if (param_1 == 2) {
      if ((uRam1002fcc4 & 1) != 0) {
        FUN_10001ed0((uint *)&local_300c,(uint *)&DAT_1002c1f0);
      }
      FUN_10001ed0((uint *)&local_300c,(uint *)&DAT_1002c1ec);
    }
    if (param_2 == 0) {
      FUN_10001ec0((uint *)&local_200c,(uint *)&local_300c);
    }
    else {
      uStackY_24 = 0x10003265;
      iVar3 = FUN_100089b0(&local_200c,0x1000,(byte *)"%s(%d) : %s");
      if (iVar3 < 0) {
        FUN_10001ec0((uint *)&local_200c,(uint *)"_CrtDbgReport: String too long or IO Error");
      }
    }
    if ((DAT_10031c0c == (code *)0x0) || (iVar3 = (*DAT_10031c0c)(), iVar3 == 0)) {
      if (((*(uint *)(&DAT_1002fcbc + param_1 * 4) & 1) != 0) &&
         (*(int *)(&DAT_1002fcc8 + param_1 * 4) != -1)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_3014;
        nNumberOfBytesToWrite = _strlen(&local_200c);
        WriteFile(*(HANDLE *)(&DAT_1002fcc8 + param_1 * 4),&local_200c,nNumberOfBytesToWrite,
                  lpNumberOfBytesWritten,lpOverlapped);
      }
      if ((*(uint *)(&DAT_1002fcbc + param_1 * 4) & 2) != 0) {
        OutputDebugStringA(&local_200c);
      }
      if ((*(uint *)(&DAT_1002fcbc + param_1 * 4) & 4) == 0) {
        if (param_1 == 2) {
          InterlockedDecrement((LONG *)&DAT_1002fcb8);
        }
        local_100c = 0;
      }
      else {
        if (param_3 != 0) {
          __itoa(param_3,local_3028,10);
        }
        bVar1 = FUN_100033e0();
        local_100c = CONCAT31(extraout_var,bVar1);
        if (param_1 == 2) {
          InterlockedDecrement((LONG *)&DAT_1002fcb8);
        }
      }
    }
    else if (param_1 == 2) {
      InterlockedDecrement((LONG *)&DAT_1002fcb8);
    }
  }
  return local_100c;
}


/*
 * FUN_100033e0 at 100033e0
 * bool __stdcall FUN_100033e0(void)
 * Address ranges: 100033e0-100036eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool FUN_100033e0(void)

{
  int iVar1;
  DWORD DVar2;
  size_t sVar3;
  char *in_stack_00000010;
  int in_stack_00000014;
  uint local_1110 [1024];
  int local_110;
  uint local_10c [50];
  undefined4 uStackY_44;
  uint *_Str;
  
  FUN_10008bb0();
  if ((in_stack_00000014 == 0) &&
     (iVar1 = FUN_10003050(2,0x1002c3cc,0x1da,0,(byte *)"szUserMessage != NULL"), iVar1 == 1)) {
    FUN_10002f40();
  }
  DVar2 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_10c,0x104);
  if (DVar2 == 0) {
    FUN_10001ec0(local_10c,(uint *)"<program name unknown>");
  }
  _Str = local_10c;
  sVar3 = _strlen((char *)_Str);
  if (0x40 < sVar3) {
    _strlen((char *)_Str);
    _strncpy((char *)0x3,"...",3);
  }
  if ((in_stack_00000010 != (char *)0x0) && (sVar3 = _strlen(in_stack_00000010), 0x40 < sVar3)) {
    sVar3 = _strlen(in_stack_00000010);
    _strncpy(in_stack_00000010 + (sVar3 - 0x40),"...",3);
  }
  uStackY_44 = 0x10003682;
  iVar1 = FUN_100089b0((undefined1 *)local_1110,0x1000,
                       (byte *)
                       "Debug %s!\n\nProgram: %s%s%s%s%s%s%s%s%s%s%s\n\n(Press Retry to debug the application)"
                      );
  if (iVar1 < 0) {
    FUN_10001ec0(local_1110,(uint *)"_CrtDbgReport: String too long or IO Error");
  }
  local_110 = FUN_10009170(local_1110,"Microsoft Visual C++ Debug Library",0x12012);
  if (local_110 == 3) {
    FUN_10008eb0(0x16);
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  return local_110 == 4;
}


/*
 * FUN_100036f0 at 100036f0
 * undefined __cdecl FUN_100036f0(void * param_1)
 * Address ranges: 100036f0-1000370c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100036f0(void *param_1)

{
  FUN_10003760(param_1,(uint)param_1,DAT_1003161c,1,0,0);
  return;
}


/*
 * FUN_10003710 at 10003710
 * undefined __cdecl FUN_10003710(void * param_1, uint param_2, int param_3, int param_4)
 * Address ranges: 10003710-10003732
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10003710(void *param_1,uint param_2,int param_3,int param_4)

{
  FUN_10003760(param_1,(uint)param_1,DAT_1003161c,param_2,param_3,param_4);
  return;
}


/*
 * FUN_10003740 at 10003740
 * undefined __cdecl FUN_10003740(void * param_1, int param_2)
 * Address ranges: 10003740-1000375a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10003740(void *param_1,int param_2)

{
  FUN_10003760(param_1,(uint)param_1,param_2,1,0,0);
  return;
}


/*
 * FUN_10003760 at 10003760
 * int * __thiscall FUN_10003760(void * this, uint param_1, int param_2, uint param_3, int param_4, int param_5)
 * Address ranges: 10003760-100037bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * __thiscall
FUN_10003760(void *this,uint param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  while( true ) {
    FUN_100073f0(9);
    piVar1 = FUN_100037e0(param_1,param_3,param_4,param_5);
    FUN_10007490(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (param_2 == 0) break;
    iVar2 = __callnewh(param_1);
    if (iVar2 == 0) {
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}


/*
 * FUN_100037c0 at 100037c0
 * undefined __cdecl FUN_100037c0(uint param_1)
 * Address ranges: 100037c0-100037d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100037c0(uint param_1)

{
  FUN_100037e0(param_1,1,0,0);
  return;
}


/*
 * FUN_100037e0 at 100037e0
 * int * __cdecl FUN_100037e0(uint param_1, uint param_2, int param_3, int param_4)
 * Address ranges: 100037e0-10003af2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * __cdecl FUN_100037e0(uint param_1,uint param_2,int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  bVar2 = false;
  if ((((DAT_1002fce0 & 4) != 0) && (iVar4 = FUN_100048b0(), iVar4 == 0)) &&
     (iVar4 = FUN_10003050(2,0x1002c4cc,0x141,0,(byte *)"_CrtCheckMemory()"), iVar4 == 1)) {
    pcVar1 = (code *)swi(3);
    piVar5 = (int *)(*pcVar1)();
    return piVar5;
  }
  iVar4 = DAT_1002fce4;
  if (DAT_1002fce4 == DAT_1002fce8) {
    pcVar1 = (code *)swi(3);
    piVar5 = (int *)(*pcVar1)();
    return piVar5;
  }
  iVar6 = (*(code *)PTR_FUN_10030000)(1,0,param_1,param_2,DAT_1002fce4,param_3,param_4);
  if (iVar6 == 0) {
    if (param_3 == 0) {
      iVar4 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
    }
    else {
      iVar4 = FUN_10003050(0,0,0,0,(byte *)"Client hook allocation failure at file %hs line %d.\n");
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
    }
    piVar5 = (int *)0x0;
  }
  else {
    if (((param_2 & 0xffff) != 2) && ((DAT_1002fce0 & 1) == 0)) {
      bVar2 = true;
    }
    if ((param_1 < 0xffffffe1) && (param_1 + 0x24 < 0xffffffe1)) {
      if (((((param_2 & 0xffff) != 4) && (param_2 != 1)) && ((param_2 & 0xffff) != 2)) &&
         ((param_2 != 3 && (iVar6 = FUN_10003050(1,0,0,0,&DAT_1002c46c), iVar6 == 1)))) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
      piVar5 = FUN_10009480((void *)(param_1 + 0x24),param_1 + 0x24);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        DAT_1002fce4 = DAT_1002fce4 + 1;
        if (bVar2) {
          *piVar5 = 0;
          piVar5[1] = 0;
          piVar5[2] = 0;
          piVar5[3] = -0x1234544;
          piVar5[4] = param_1;
          piVar5[5] = 3;
          piVar5[6] = 0;
        }
        else {
          DAT_10031438 = DAT_10031438 + param_1;
          DAT_10031440 = DAT_10031440 + param_1;
          if (DAT_10031444 < DAT_10031440) {
            DAT_10031444 = DAT_10031440;
          }
          piVar3 = piVar5;
          if (DAT_1003143c != (int *)0x0) {
            DAT_1003143c[1] = (int)piVar5;
            piVar3 = DAT_10031434;
          }
          DAT_10031434 = piVar3;
          *piVar5 = (int)DAT_1003143c;
          piVar5[1] = 0;
          piVar5[2] = param_3;
          piVar5[3] = param_4;
          piVar5[4] = param_1;
          piVar5[5] = param_2;
          piVar5[6] = iVar4;
          DAT_1003143c = piVar5;
        }
        _memset(piVar5 + 7,(uint)DAT_1002fcec,4);
        _memset((void *)((int)piVar5 + param_1 + 0x20),(uint)DAT_1002fcec,4);
        _memset(piVar5 + 8,(uint)DAT_1002fcee,param_1);
        piVar5 = piVar5 + 8;
      }
    }
    else {
      iVar4 = FUN_10003050(1,0,0,0,(byte *)"Invalid allocation size: %u bytes.\n");
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
      piVar5 = (int *)0x0;
    }
  }
  return piVar5;
}


/*
 * FUN_10003b00 at 10003b00
 * undefined __cdecl FUN_10003b00(int param_1, int param_2)
 * Address ranges: 10003b00-10003b1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10003b00(int param_1,int param_2)

{
  __calloc_dbg(param_1,param_2,1,0,0);
  return;
}


/*
 * __calloc_dbg at 10003b20
 * undefined1 * __cdecl __calloc_dbg(int param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 10003b20-10003b7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __calloc_dbg  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __calloc_dbg
   
   Library: Visual Studio 2003 Debug */

undefined1 * __cdecl __calloc_dbg(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined1 *local_10;
  
  puVar1 = (undefined1 *)FUN_10003710((void *)(param_2 * param_1),param_3,param_4,param_5);
  if (puVar1 != (undefined1 *)0x0) {
    for (local_10 = puVar1; local_10 < puVar1 + param_2 * param_1; local_10 = local_10 + 1) {
      *local_10 = 0;
    }
  }
  return puVar1;
}


/*
 * FUN_10003b80 at 10003b80
 * undefined __cdecl FUN_10003b80(void * param_1, void * param_2)
 * Address ranges: 10003b80-10003b9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10003b80(void *param_1,void *param_2)

{
  FUN_10003ba0(param_1,param_2,1,0,0);
  return;
}


/*
 * FUN_10003ba0 at 10003ba0
 * int * __cdecl FUN_10003ba0(void * param_1, void * param_2, uint param_3, int param_4, int param_5)
 * Address ranges: 10003ba0-10003bdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * __cdecl FUN_10003ba0(void *param_1,void *param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  
  FUN_100073f0(9);
  piVar1 = FUN_10003be0(param_1,param_2,param_3,param_4,param_5,1);
  FUN_10007490(9);
  return piVar1;
}


/*
 * FUN_10003be0 at 10003be0
 * int * __cdecl FUN_10003be0(void * param_1, void * param_2, uint param_3, int param_4, int param_5, int param_6)
 * Address ranges: 10003be0-100040f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * __cdecl
FUN_10003be0(void *param_1,void *param_2,uint param_3,int param_4,int param_5,int param_6)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  BOOL BVar6;
  bool bVar7;
  int *local_10;
  
  if (param_1 == (void *)0x0) {
    piVar2 = (int *)FUN_10003710(param_2,param_3,param_4,param_5);
  }
  else if ((param_6 == 0) || (param_2 != (void *)0x0)) {
    if (((DAT_1002fce0 & 4) != 0) &&
       ((iVar3 = FUN_100048b0(), iVar3 == 0 &&
        (iVar3 = FUN_10003050(2,0x1002c4cc,0x239,0,(byte *)"_CrtCheckMemory()"), iVar3 == 1)))) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
    iVar3 = DAT_1002fce4;
    if (DAT_1002fce4 == DAT_1002fce8) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
    iVar5 = (*(code *)PTR_FUN_10030000)(2,param_1,param_2,param_3,DAT_1002fce4,param_4,param_5);
    if (iVar5 == 0) {
      if (param_4 == 0) {
        iVar3 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      else {
        iVar3 = FUN_10003050(0,0,0,0,(byte *)
                                     "Client hook re-allocation failure at file %hs line %d.\n");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      piVar2 = (int *)0x0;
    }
    else if (param_2 < (void *)0xffffffdc) {
      if ((((param_3 != 1) && ((param_3 & 0xffff) != 4)) && ((param_3 & 0xffff) != 2)) &&
         (iVar5 = FUN_10003050(1,0,0,0,&DAT_1002c46c), iVar5 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      BVar6 = FUN_10004d10((int)param_1);
      if ((BVar6 == 0) &&
         (iVar5 = FUN_10003050(2,0x1002c4cc,0x261,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
         iVar5 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      piVar4 = (int *)((int)param_1 + -0x20);
      bVar7 = *(int *)((int)param_1 + -0xc) == 3;
      if (bVar7) {
        if (((*(int *)((int)param_1 + -0x14) != -0x1234544) || (*(int *)((int)param_1 + -8) != 0))
           && (iVar5 = FUN_10003050(2,0x1002c4cc,0x26b,0,
                                    (byte *)
                                    "pOldBlock->nLine == IGNORE_LINE && pOldBlock->lRequest == IGNORE_REQ"
                                   ), iVar5 == 1)) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      else {
        if (((*(uint *)((int)param_1 + -0xc) & 0xffff) == 2) && ((param_3 & 0xffff) == 1)) {
          param_3 = 2;
        }
        if (((*(uint *)((int)param_1 + -0xc) & 0xffff) != (param_3 & 0xffff)) &&
           (iVar5 = FUN_10003050(2,0x1002c4cc,0x272,0,
                                 (byte *)"_BLOCK_TYPE(pOldBlock->nBlockUse)==_BLOCK_TYPE(nBlockUse)"
                                ), iVar5 == 1)) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      if (param_6 == 0) {
        local_10 = FUN_10009500(piVar4,(int)param_2 + 0x24);
        if (local_10 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      else {
        local_10 = FUN_100095b0(piVar4,(void *)((int)param_2 + 0x24));
        if (local_10 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      DAT_1002fce4 = DAT_1002fce4 + 1;
      if (!bVar7) {
        DAT_10031438 = (DAT_10031438 - local_10[4]) + (int)param_2;
        DAT_10031440 = (DAT_10031440 - local_10[4]) + (int)param_2;
        if (DAT_10031444 < DAT_10031440) {
          DAT_10031444 = DAT_10031440;
        }
      }
      piVar2 = local_10 + 8;
      if ((void *)local_10[4] < param_2) {
        _memset((void *)((int)piVar2 + local_10[4]),(uint)DAT_1002fcee,(int)param_2 - local_10[4]);
      }
      _memset((void *)((int)piVar2 + (int)param_2),(uint)DAT_1002fcec,4);
      if (!bVar7) {
        local_10[2] = param_4;
        local_10[3] = param_5;
        local_10[6] = iVar3;
      }
      local_10[4] = (int)param_2;
      if (((param_6 == 0) && (local_10 != piVar4)) &&
         (iVar3 = FUN_10003050(2,0x1002c4cc,0x2a8,0,
                               (byte *)"fRealloc || (!fRealloc && pNewBlock == pOldBlock)"),
         iVar3 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      if ((local_10 != piVar4) && (!bVar7)) {
        if (*local_10 == 0) {
          if ((DAT_10031434 != piVar4) &&
             (iVar3 = FUN_10003050(2,0x1002c4cc,0x2b7,0,(byte *)"_pLastBlock == pOldBlock"),
             iVar3 == 1)) {
            pcVar1 = (code *)swi(3);
            piVar4 = (int *)(*pcVar1)();
            return piVar4;
          }
          DAT_10031434 = (int *)local_10[1];
        }
        else {
          *(int *)(*local_10 + 4) = local_10[1];
        }
        if (local_10[1] == 0) {
          if ((DAT_1003143c != piVar4) &&
             (iVar3 = FUN_10003050(2,0x1002c4cc,0x2c2,0,(byte *)"_pFirstBlock == pOldBlock"),
             iVar3 == 1)) {
            pcVar1 = (code *)swi(3);
            piVar4 = (int *)(*pcVar1)();
            return piVar4;
          }
          DAT_1003143c = (int *)*local_10;
        }
        else {
          *(int *)local_10[1] = *local_10;
        }
        if (DAT_1003143c == (int *)0x0) {
          DAT_10031434 = local_10;
        }
        else {
          DAT_1003143c[1] = (int)local_10;
        }
        *local_10 = (int)DAT_1003143c;
        local_10[1] = 0;
        DAT_1003143c = local_10;
      }
    }
    else {
      iVar3 = FUN_10003050(1,0,0,0,(byte *)"Allocation too large or negative: %u bytes.\n");
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      piVar2 = (int *)0x0;
    }
  }
  else {
    FUN_100041a0(param_1,param_3);
    piVar2 = (int *)0x0;
  }
  return piVar2;
}


/*
 * FUN_10004100 at 10004100
 * undefined __cdecl FUN_10004100(void * param_1, void * param_2)
 * Address ranges: 10004100-1000411a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10004100(void *param_1,void *param_2)

{
  FUN_10004120(param_1,param_2,1,0,0);
  return;
}


/*
 * FUN_10004120 at 10004120
 * int * __cdecl FUN_10004120(void * param_1, void * param_2, uint param_3, int param_4, int param_5)
 * Address ranges: 10004120-1000415f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * __cdecl FUN_10004120(void *param_1,void *param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  
  FUN_100073f0(9);
  piVar1 = FUN_10003be0(param_1,param_2,param_3,param_4,param_5,0);
  FUN_10007490(9);
  return piVar1;
}


/*
 * FUN_10004160 at 10004160
 * undefined __cdecl FUN_10004160(void * param_1)
 * Address ranges: 10004160-10004172
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10004160(void *param_1)

{
  FUN_100041a0(param_1,1);
  return;
}


/*
 * FUN_10004180 at 10004180
 * undefined __cdecl FUN_10004180(void * param_1)
 * Address ranges: 10004180-10004192
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10004180(void *param_1)

{
  FUN_100041d0(param_1,1);
  return;
}


/*
 * FUN_100041a0 at 100041a0
 * undefined __cdecl FUN_100041a0(void * param_1, int param_2)
 * Address ranges: 100041a0-100041c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100041a0(void *param_1,int param_2)

{
  FUN_100073f0(9);
  FUN_100041d0(param_1,param_2);
  FUN_10007490(9);
  return;
}


/*
 * FUN_100041d0 at 100041d0
 * undefined __cdecl FUN_100041d0(void * param_1, int param_2)
 * Address ranges: 100041d0-100045bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100041d0(void *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  int *_Dst;
  void *this;
  void *this_00;
  
  if ((((DAT_1002fce0 & 4) != 0) && (iVar2 = FUN_100048b0(), iVar2 == 0)) &&
     (iVar2 = FUN_10003050(2,0x1002c4cc,0x3e1,0,(byte *)"_CrtCheckMemory()"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (void *)0x0) {
    iVar2 = (*(code *)PTR_FUN_10030000)(3,param_1,0,param_2,0,0,0);
    if (iVar2 == 0) {
      iVar2 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      BVar3 = FUN_10004d10((int)param_1);
      if ((BVar3 == 0) &&
         (iVar2 = FUN_10003050(2,0x1002c4cc,0x3f3,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
         iVar2 == 1)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Dst = (int *)((int)param_1 + -0x20);
      if ((((*(uint *)((int)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((int)param_1 + -0xc) != 1))
         && (((*(uint *)((int)param_1 + -0xc) & 0xffff) != 2 &&
             ((*(int *)((int)param_1 + -0xc) != 3 &&
              (iVar2 = FUN_10003050(2,0x1002c4cc,0x3f9,0,
                                    (byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"), iVar2 == 1)))
             ))) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((DAT_1002fce0 & 4) == 0) {
        iVar2 = FUN_10004820((char *)((int)param_1 + -4),DAT_1002fcec,4);
        if ((iVar2 == 0) &&
           (iVar2 = FUN_10003050(1,0,0,0,(byte *)"DAMAGE: before %hs block (#%d) at 0x%08X.\n"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar2 = FUN_10004820((char *)((int)param_1 + *(int *)((int)param_1 + -0x10)),DAT_1002fcec,4)
        ;
        if ((iVar2 == 0) &&
           (iVar2 = FUN_10003050(1,0,0,0,(byte *)"DAMAGE: after %hs block (#%d) at 0x%08X.\n"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(int *)((int)param_1 + -0xc) == 3) {
        if (((*(int *)((int)param_1 + -0x14) != -0x1234544) || (*(int *)((int)param_1 + -8) != 0))
           && (iVar2 = FUN_10003050(2,0x1002c4cc,0x40e,0,
                                    (byte *)
                                    "pHead->nLine == IGNORE_LINE && pHead->lRequest == IGNORE_REQ"),
              iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        _memset(_Dst,(uint)DAT_1002fced,*(int *)((int)param_1 + -0x10) + 0x24);
        FUN_100097a0(this,_Dst);
      }
      else {
        if ((*(int *)((int)param_1 + -0xc) == 2) && (param_2 == 1)) {
          param_2 = 2;
        }
        if ((*(int *)((int)param_1 + -0xc) != param_2) &&
           (iVar2 = FUN_10003050(2,0x1002c4cc,0x41b,0,(byte *)"pHead->nBlockUse == nBlockUse"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        DAT_10031440 = DAT_10031440 - *(int *)((int)param_1 + -0x10);
        if ((DAT_1002fce0 & 2) == 0) {
          if (*_Dst == 0) {
            if ((DAT_10031434 != _Dst) &&
               (iVar2 = FUN_10003050(2,0x1002c4cc,0x42a,0,(byte *)"_pLastBlock == pHead"),
               iVar2 == 1)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            DAT_10031434 = *(int **)((int)param_1 + -0x1c);
          }
          else {
            *(undefined4 *)(*_Dst + 4) = *(undefined4 *)((int)param_1 + -0x1c);
          }
          if (*(int *)((int)param_1 + -0x1c) == 0) {
            if ((DAT_1003143c != _Dst) &&
               (iVar2 = FUN_10003050(2,0x1002c4cc,0x434,0,(byte *)"_pFirstBlock == pHead"),
               iVar2 == 1)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            DAT_1003143c = (int *)*_Dst;
          }
          else {
            **(int **)((int)param_1 + -0x1c) = *_Dst;
          }
          _memset(_Dst,(uint)DAT_1002fced,*(int *)((int)param_1 + -0x10) + 0x24);
          FUN_100097a0(this_00,_Dst);
        }
        else {
          *(undefined4 *)((int)param_1 + -0xc) = 0;
          _memset(param_1,(uint)DAT_1002fced,*(size_t *)((int)param_1 + -0x10));
        }
      }
    }
  }
  return;
}


/*
 * FUN_100045c0 at 100045c0
 * undefined __cdecl FUN_100045c0(int param_1)
 * Address ranges: 100045c0-100045d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100045c0(int param_1)

{
  FUN_100045e0(param_1,1);
  return;
}


/*
 * FUN_100045e0 at 100045e0
 * undefined4 __cdecl FUN_100045e0(int param_1, int param_2)
 * Address ranges: 100045e0-10004735
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_100045e0(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  BOOL BVar4;
  
  if ((((DAT_1002fce0 & 4) != 0) && (iVar2 = FUN_100048b0(), iVar2 == 0)) &&
     (iVar2 = FUN_10003050(2,0x1002c4cc,0x47c,0,(byte *)"_CrtCheckMemory()"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  FUN_100073f0(9);
  BVar4 = FUN_10004d10(param_1);
  if ((BVar4 == 0) &&
     (iVar2 = FUN_10003050(2,0x1002c4cc,0x485,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
     iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
     (((*(uint *)(param_1 + -0xc) & 0xffff) != 2 &&
      ((*(int *)(param_1 + -0xc) != 3 &&
       (iVar2 = FUN_10003050(2,0x1002c4cc,0x48b,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
       iVar2 == 1)))))) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((*(int *)(param_1 + -0xc) == 2) && (param_2 == 1)) {
    param_2 = 2;
  }
  if (((*(int *)(param_1 + -0xc) != 3) && (*(int *)(param_1 + -0xc) != param_2)) &&
     (iVar2 = FUN_10003050(2,0x1002c4cc,0x492,0,(byte *)"pHead->nBlockUse == nBlockUse"), iVar2 == 1
     )) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uVar3 = *(undefined4 *)(param_1 + -0x10);
  FUN_10007490(9);
  return uVar3;
}


/*
 * FUN_10004740 at 10004740
 * undefined4 __cdecl FUN_10004740(undefined4 param_1)
 * Address ranges: 10004740-1000475b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10004740(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_1002fce8;
  DAT_1002fce8 = param_1;
  return uVar1;
}


/*
 * FUN_10004760 at 10004760
 * undefined __cdecl FUN_10004760(int param_1, undefined4 param_2)
 * Address ranges: 10004760-100047fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10004760(int param_1,undefined4 param_2)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  
  FUN_100073f0(9);
  BVar2 = FUN_10004d10(param_1);
  if (BVar2 != 0) {
    if (((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
        ((*(uint *)(param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)(param_1 + -0xc) != 3 &&
        (iVar3 = FUN_10003050(2,0x1002c4cc,0x4d3,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)")
        , iVar3 == 1)))) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)(param_1 + -0xc) = param_2;
  }
  FUN_10007490(9);
  return;
}


/*
 * FUN_10004800 at 10004800
 * undefined * __cdecl FUN_10004800(undefined * param_1)
 * Address ranges: 10004800-1000481b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined * __cdecl FUN_10004800(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_10030000;
  PTR_FUN_10030000 = param_1;
  return puVar1;
}


/*
 * FUN_10004820 at 10004820
 * undefined4 __cdecl FUN_10004820(char * param_1, char param_2, int param_3)
 * Address ranges: 10004820-100048a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10004820(char *param_1,char param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_8;
  
  local_8 = 1;
  while( true ) {
    do {
      iVar4 = param_3 + -1;
      if (param_3 == 0) {
        return local_8;
      }
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      param_3 = iVar4;
    } while (cVar1 == param_2);
    iVar4 = FUN_10003050(0,0,0,0,(byte *)
                                 "memory check error at 0x%08X = 0x%02X, should be 0x%02X.\n");
    if (iVar4 == 1) break;
    local_8 = 0;
  }
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}


/*
 * FUN_100048b0 at 100048b0
 * undefined4 __stdcall FUN_100048b0(void)
 * Address ranges: 100048b0-10004c0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_100048b0(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *local_c;
  undefined4 local_8;
  
  local_8 = 1;
  if ((DAT_1002fce0 & 1) == 0) {
    local_8 = 1;
  }
  else {
    FUN_100073f0(9);
    iVar3 = FUN_10009810();
    if ((iVar3 == -1) || (iVar3 == -2)) {
      for (local_c = DAT_1003143c; local_c != (undefined4 *)0x0; local_c = (undefined4 *)*local_c) {
        bVar2 = true;
        iVar3 = FUN_10004820((char *)(local_c + 7),DAT_1002fcec,4);
        if (iVar3 == 0) {
          iVar3 = FUN_10003050(0,0,0,0,(byte *)"DAMAGE: before %hs block (#%d) at 0x%08X.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        iVar3 = FUN_10004820((char *)((int)local_c + local_c[4] + 0x20),DAT_1002fcec,4);
        if (iVar3 == 0) {
          iVar3 = FUN_10003050(0,0,0,0,(byte *)"DAMAGE: after %hs block (#%d) at 0x%08X.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        if ((local_c[5] == 0) &&
           (iVar3 = FUN_10004820((char *)(local_c + 8),DAT_1002fced,local_c[4]), iVar3 == 0)) {
          iVar3 = FUN_10003050(0,0,0,0,(byte *)"DAMAGE: on top of Free block at 0x%08X.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        if (!bVar2) {
          if ((local_c[2] != 0) &&
             (iVar3 = FUN_10003050(0,0,0,0,(byte *)"%hs allocated at file %hs(%d).\n"), iVar3 == 1))
          {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          iVar3 = FUN_10003050(0,0,0,0,(byte *)"%hs located at 0x%08X is %u bytes long.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          local_8 = 0;
        }
      }
      FUN_10007490(9);
    }
    else {
      switch(iVar3) {
      case -6:
        iVar3 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -5:
        iVar3 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -4:
        iVar3 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -3:
        iVar3 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      default:
        iVar3 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
      }
      FUN_10007490(9);
      local_8 = 0;
    }
  }
  return local_8;
}


/*
 * FUN_10004c20 at 10004c20
 * int __cdecl FUN_10004c20(int param_1)
 * Address ranges: 10004c20-10004c41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10004c20(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_1002fce0;
  if (param_1 != -1) {
    DAT_1002fce0 = param_1;
  }
  return iVar1;
}


/*
 * FUN_10004c50 at 10004c50
 * undefined __cdecl FUN_10004c50(undefined * param_1, undefined4 param_2)
 * Address ranges: 10004c50-10004cb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10004c50(undefined *param_1,undefined4 param_2)

{
  undefined4 *local_8;
  
  if ((DAT_1002fce0 & 1) != 0) {
    FUN_100073f0(9);
    for (local_8 = DAT_1003143c; local_8 != (undefined4 *)0x0; local_8 = (undefined4 *)*local_8) {
      if ((local_8[5] & 0xffff) == 4) {
        (*(code *)param_1)(local_8 + 8,param_2);
      }
    }
    FUN_10007490(9);
  }
  return;
}


/*
 * FID_conflict:AtlIsValidAddress at 10004cc0
 * undefined4 __cdecl FID_conflict:AtlIsValidAddress(void * param_1, UINT_PTR param_2, int param_3)
 * Address ranges: 10004cc0-10004d0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Multiple Matches With Different Base Names  int __cdecl ATL::AtlIsValidAddress(void const *,unsigned int,int)  __CrtIsValidPointer  Library: Visual Studio 2003 Debug
 */


/* Library Function - Multiple Matches With Different Base Names
    int __cdecl ATL::AtlIsValidAddress(void const *,unsigned int,int)
    __CrtIsValidPointer
   
   Library: Visual Studio 2003 Debug */

undefined4 __cdecl FID_conflict_AtlIsValidAddress(void *param_1,UINT_PTR param_2,int param_3)

{
  BOOL BVar1;
  
  if (((param_1 != (void *)0x0) && (BVar1 = IsBadReadPtr(param_1,param_2), BVar1 == 0)) &&
     ((param_3 == 0 || (BVar1 = IsBadWritePtr(param_1,param_2), BVar1 == 0)))) {
    return 1;
  }
  return 0;
}


/*
 * FUN_10004d10 at 10004d10
 * BOOL __cdecl FUN_10004d10(int param_1)
 * Address ranges: 10004d10-10004d95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


BOOL __cdecl FUN_10004d10(int param_1)

{
  BOOL BVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    BVar1 = 0;
  }
  else {
    iVar2 = FID_conflict_AtlIsValidAddress((void *)(param_1 + -0x20),0x20,1);
    if (iVar2 == 0) {
      BVar1 = 0;
    }
    else {
      uVar3 = FUN_10009930(param_1 + -0x20);
      if (uVar3 == 0) {
        if ((DAT_100314ac & 0x8000) == 0) {
          BVar1 = HeapValidate(DAT_10031a8c,0,(LPCVOID)(param_1 + -0x20));
        }
        else {
          BVar1 = 1;
        }
      }
      else {
        BVar1 = FUN_10009990(uVar3,param_1 + -0x20);
      }
    }
  }
  return BVar1;
}


/*
 * FUN_10004da0 at 10004da0
 * undefined4 __cdecl FUN_10004da0(void * param_1, UINT_PTR param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5)
 * Address ranges: 10004da0-10004e82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl
FUN_10004da0(void *param_1,UINT_PTR param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = FUN_10004d10((int)param_1);
  if (BVar1 != 0) {
    FUN_100073f0(9);
    if ((((((*(uint *)((int)param_1 + -0xc) & 0xffff) == 4) || (*(int *)((int)param_1 + -0xc) == 1))
         || ((*(uint *)((int)param_1 + -0xc) & 0xffff) == 2)) ||
        (*(int *)((int)param_1 + -0xc) == 3)) &&
       (((iVar2 = FID_conflict_AtlIsValidAddress(param_1,param_2,1), iVar2 != 0 &&
         (*(UINT_PTR *)((int)param_1 + -0x10) == param_2)) &&
        (*(int *)((int)param_1 + -8) <= DAT_1002fce4)))) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)((int)param_1 + -8);
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)((int)param_1 + -0x18);
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = *(undefined4 *)((int)param_1 + -0x14);
      }
      FUN_10007490(9);
      return 1;
    }
    FUN_10007490(9);
  }
  return 0;
}


/*
 * FUN_10004e90 at 10004e90
 * undefined4 __cdecl FUN_10004e90(undefined4 param_1)
 * Address ranges: 10004e90-10004eab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10004e90(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_10031c00;
  DAT_10031c00 = param_1;
  return uVar1;
}


/*
 * FUN_10004eb0 at 10004eb0
 * undefined __cdecl FUN_10004eb0(undefined4 * param_1)
 * Address ranges: 10004eb0-10005019
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10004eb0(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_c;
  int local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    iVar2 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FUN_100073f0(9);
    *param_1 = DAT_1003143c;
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      param_1[local_8 + 6] = 0;
      param_1[local_8 + 1] = 0;
    }
    for (local_c = DAT_1003143c; local_c != (undefined4 *)0x0; local_c = (undefined4 *)*local_c) {
      if ((local_c[5] & 0xffff) < 5) {
        param_1[(local_c[5] & 0xffff) + 1] = param_1[(local_c[5] & 0xffff) + 1] + 1;
        param_1[(local_c[5] & 0xffff) + 6] = param_1[(local_c[5] & 0xffff) + 6] + local_c[4];
      }
      else {
        iVar2 = FUN_10003050(0,0,0,0,(byte *)"Bad memory block found at 0x%08X.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    param_1[0xb] = DAT_10031444;
    param_1[0xc] = DAT_10031438;
    FUN_10007490(9);
  }
  return;
}


/*
 * FUN_10005020 at 10005020
 * undefined4 __cdecl FUN_10005020(undefined4 * param_1, int param_2, int param_3)
 * Address ranges: 10005020-10005142
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10005020(undefined4 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  if (((param_1 == (undefined4 *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    iVar2 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    local_c = 0;
  }
  else {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      param_1[local_8 + 6] =
           *(int *)(param_3 + 0x18 + local_8 * 4) - *(int *)(param_2 + 0x18 + local_8 * 4);
      param_1[local_8 + 1] =
           *(int *)(param_3 + 4 + local_8 * 4) - *(int *)(param_2 + 4 + local_8 * 4);
      if (((param_1[local_8 + 6] != 0) || (param_1[local_8 + 1] != 0)) &&
         ((local_8 != 0 && ((local_8 != 2 || ((DAT_1002fce0 & 0x10) != 0)))))) {
        local_c = 1;
      }
    }
    param_1[0xb] = *(int *)(param_3 + 0x2c) - *(int *)(param_2 + 0x2c);
    param_1[0xc] = *(int *)(param_3 + 0x30) - *(int *)(param_2 + 0x30);
    *param_1 = 0;
  }
  return local_c;
}


/*
 * FUN_10005150 at 10005150
 * undefined __cdecl FUN_10005150(undefined4 * param_1)
 * Address ranges: 10005150-10005408
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10005150(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = (undefined4 *)0x0;
  FUN_100073f0(9);
  iVar2 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (undefined4 *)0x0) {
    local_c = (undefined4 *)*param_1;
  }
  local_8 = DAT_1003143c;
  do {
    if ((local_8 == (undefined4 *)0x0) || (local_8 == local_c)) {
      FUN_10007490(9);
      iVar2 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      return;
    }
    if ((((local_8[5] & 0xffff) != 3) && ((local_8[5] & 0xffff) != 0)) &&
       (((local_8[5] & 0xffff) != 2 || ((DAT_1002fce0 & 0x10) != 0)))) {
      if (local_8[2] != 0) {
        iVar2 = FID_conflict_AtlIsValidAddress((void *)local_8[2],1,0);
        if (iVar2 == 0) {
          iVar2 = FUN_10003050(0,0,0,0,(byte *)"#File Error#(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          iVar2 = FUN_10003050(0,0,0,0,(byte *)"%hs(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      iVar2 = FUN_10003050(0,0,0,0,(byte *)"{%ld} ");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((local_8[5] & 0xffff) == 4) {
        iVar2 = FUN_10003050(0,0,0,0,(byte *)"client block at 0x%08X, subtype %x, %u bytes long.\n")
        ;
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_10031c00 == (code *)0x0) {
          FUN_10005410((int)local_8);
        }
        else {
          (*DAT_10031c00)(local_8 + 8,local_8[4]);
        }
      }
      else if (local_8[5] == 1) {
        iVar2 = FUN_10003050(0,0,0,0,(byte *)"normal block at 0x%08X, %u bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_10005410((int)local_8);
      }
      else if ((local_8[5] & 0xffff) == 2) {
        iVar2 = FUN_10003050(0,0,0,0,(byte *)"crt block at 0x%08X, subtype %x, %u bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_10005410((int)local_8);
      }
    }
    local_8 = (undefined4 *)*local_8;
  } while( true );
}


/*
 * FUN_10005410 at 10005410
 * undefined __cdecl FUN_10005410(int param_1)
 * Address ranges: 10005410-10005523
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10005410(int param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  uint local_5c;
  int local_58;
  int local_50;
  byte local_4c [20];
  undefined1 local_38 [52];
  
  local_50 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x10) < 0x10) {
      local_58 = *(int *)(param_1 + 0x10);
    }
    else {
      local_58 = 0x10;
    }
    if (local_58 <= local_50) break;
    bVar1 = *(byte *)(param_1 + local_50 + 0x20);
    if (DAT_10030214 < 2) {
      local_5c = *(ushort *)(PTR_DAT_10030008 + (uint)bVar1 * 2) & 0x157;
    }
    else {
      local_5c = FUN_1000b640((uint)bVar1,0x157);
    }
    if (local_5c == 0) {
      bVar1 = 0x20;
    }
    local_4c[local_50] = bVar1;
    FUN_1000b540(local_38 + local_50 * 3,(byte *)"%.2X ");
    local_50 = local_50 + 1;
  }
  local_4c[local_50] = 0;
  iVar3 = FUN_10003050(0,0,0,0,(byte *)" Data: <%s> %s\n");
  if (iVar3 == 1) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


/*
 * FUN_10005530 at 10005530
 * undefined4 __stdcall FUN_10005530(void)
 * Address ranges: 10005530-100055a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10005530(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_38 [2];
  int local_30;
  int local_2c;
  int local_24;
  
  FUN_10004eb0(local_38);
  if (((local_24 == 0) && (local_30 == 0)) && (((DAT_1002fce0 & 0x10) == 0 || (local_2c == 0)))) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    FUN_10005150((undefined4 *)0x0);
    uVar3 = 1;
  }
  return uVar3;
}


/*
 * FUN_100055b0 at 100055b0
 * undefined __cdecl FUN_100055b0(int param_1)
 * Address ranges: 100055b0-10005674
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100055b0(int param_1)

{
  code *pcVar1;
  int iVar2;
  int local_8;
  
  if (param_1 != 0) {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      iVar2 = FUN_10003050(0,0,0,0,(byte *)"%ld bytes in %ld %hs Blocks.\n");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar2 = FUN_10003050(0,0,0,0,(byte *)"Largest number used: %ld bytes.\n");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = FUN_10003050(0,0,0,0,(byte *)"Total allocations: %ld bytes.\n");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}


/*
 * FUN_10005680 at 10005680
 * undefined4 __cdecl FUN_10005680(uint param_1)
 * Address ranges: 10005680-100056f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10005680(uint param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  undefined4 uVar3;
  
  if ((param_1 < DAT_10031bfc) &&
     ((*(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100029d0(param_1);
    uVar3 = __close_lk(param_1);
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    pDVar2 = FUN_10006f30();
    *pDVar2 = 0;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/*
 * __close_lk at 10005700
 * undefined4 __cdecl __close_lk(uint param_1)
 * Address ranges: 10005700-100057a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __close_lk  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __close_lk
   
   Library: Visual Studio 2003 Debug */

undefined4 __cdecl __close_lk(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  undefined4 uVar4;
  ulong local_8;
  
  iVar1 = FUN_10002850(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_10002850(1);
      iVar2 = FUN_10002850(2);
      if (iVar1 == iVar2) goto LAB_10005753;
    }
    hObject = (HANDLE)FUN_10002850(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      local_8 = GetLastError();
      goto LAB_10005765;
    }
  }
LAB_10005753:
  local_8 = 0;
LAB_10005765:
  FUN_10002770(param_1);
  *(undefined1 *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (local_8 == 0) {
    uVar4 = 0;
  }
  else {
    __dosmaperr(local_8);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


/*
 * FUN_100057b0 at 100057b0
 * undefined __cdecl FUN_100057b0(undefined4 * param_1)
 * Address ranges: 100057b0-10005841
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100057b0(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002cb1c,0x30,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_100041a0((void *)param_1[2],2);
    param_1[3] = param_1[3] & 0xfffffbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}


/*
 * FUN_10005850 at 10005850
 * int __cdecl FUN_10005850(undefined * * param_1)
 * Address ranges: 10005850-10005893
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10005850(undefined **param_1)

{
  int iVar1;
  
  if (param_1 == (undefined **)0x0) {
    iVar1 = FUN_100059c0(0);
  }
  else {
    FUN_10002e60(param_1);
    iVar1 = FUN_100058a0((int *)param_1);
    FUN_10002ed0(param_1);
  }
  return iVar1;
}


/*
 * FUN_100058a0 at 100058a0
 * int __cdecl FUN_100058a0(int * param_1)
 * Address ranges: 100058a0-100058e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_100058a0(int *param_1)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_100058f0(param_1);
  if (iVar1 == 0) {
    if ((param_1[3] & 0x4000U) == 0) {
      iVar1 = 0;
    }
    else {
      DVar2 = FUN_1000b700(param_1[4]);
      iVar1 = -(uint)(DVar2 != 0);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


/*
 * FUN_100058f0 at 100058f0
 * undefined4 __cdecl FUN_100058f0(int * param_1)
 * Address ranges: 100058f0-100059a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_100058f0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_8;
  
  local_8 = 0;
  if ((((param_1[3] & 3U) == 2) && ((param_1[3] & 0x108U) != 0)) &&
     (uVar2 = *param_1 - param_1[2], 0 < (int)uVar2)) {
    uVar1 = FUN_1000b7e0(param_1[4],(char *)param_1[2],uVar2);
    if (uVar1 == uVar2) {
      if ((param_1[3] & 0x80U) != 0) {
        param_1[3] = param_1[3] & 0xfffffffd;
      }
    }
    else {
      param_1[3] = param_1[3] | 0x20;
      local_8 = 0xffffffff;
    }
  }
  *param_1 = param_1[2];
  param_1[1] = 0;
  return local_8;
}


/*
 * FUN_100059b0 at 100059b0
 * undefined __stdcall FUN_100059b0(void)
 * Address ranges: 100059b0-100059be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_100059b0(void)

{
  FUN_100059c0(1);
  return;
}


/*
 * FUN_100059c0 at 100059c0
 * int __cdecl FUN_100059c0(int param_1)
 * Address ranges: 100059c0-10005afe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_100059c0(int param_1)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  FUN_100073f0(2);
  for (local_10 = 0; local_10 < DAT_10032f60; local_10 = local_10 + 1) {
    if ((*(int *)(DAT_10031c18 + local_10 * 4) != 0) &&
       ((*(uint *)(*(int *)(DAT_10031c18 + local_10 * 4) + 0xc) & 0x83) != 0)) {
      FUN_10002ea0(local_10,*(int *)(DAT_10031c18 + local_10 * 4));
      if ((*(uint *)(*(int *)(DAT_10031c18 + local_10 * 4) + 0xc) & 0x83) != 0) {
        if (param_1 == 1) {
          iVar1 = FUN_100058a0(*(int **)(DAT_10031c18 + local_10 * 4));
          if (iVar1 != -1) {
            local_8 = local_8 + 1;
          }
        }
        else if (((param_1 == 0) &&
                 ((*(uint *)(*(int *)(DAT_10031c18 + local_10 * 4) + 0xc) & 2) != 0)) &&
                (iVar1 = FUN_100058a0(*(int **)(DAT_10031c18 + local_10 * 4)), iVar1 == -1)) {
          local_c = -1;
        }
      }
      FUN_10002f10(local_10,*(int *)(DAT_10031c18 + local_10 * 4));
    }
  }
  FUN_10007490(2);
  if (param_1 == 1) {
    local_c = local_8;
  }
  return local_c;
}


/*
 * FUN_10005b00 at 10005b00
 * uint __cdecl FUN_10005b00(int * param_1)
 * Address ranges: 10005b00-10005ce3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_10005b00(int *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined *local_c;
  
  if ((param_1 == (int *)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002cb28,0x69,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (((param_1[3] & 0x83U) == 0) || ((param_1[3] & 0x40U) != 0)) {
    uVar3 = 0xffffffff;
  }
  else if ((param_1[3] & 2U) == 0) {
    param_1[3] = param_1[3] | 1;
    if ((param_1[3] & 0x10cU) == 0) {
      FUN_1000baf0(param_1);
    }
    else {
      *param_1 = param_1[2];
    }
    iVar2 = FUN_10005cf0(param_1[4],(char *)param_1[2],param_1[6]);
    param_1[1] = iVar2;
    if ((param_1[1] == 0) || (param_1[1] == -1)) {
      param_1[3] = param_1[3] | (-(uint)(param_1[1] != 0) & 0x10) + 0x10;
      param_1[1] = 0;
      uVar3 = 0xffffffff;
    }
    else {
      if ((param_1[3] & 0x82U) == 0) {
        if (param_1[4] == -1) {
          local_c = &DAT_1002fe78;
        }
        else {
          local_c = (undefined *)((&DAT_10031ac0)[param_1[4] >> 5] + (param_1[4] & 0x1fU) * 0x24);
        }
        if (((int)(char)local_c[4] & 0x82U) == 0x82) {
          param_1[3] = param_1[3] | 0x2000;
        }
      }
      if (((param_1[6] == 0x200) && ((param_1[3] & 8U) != 0)) && ((param_1[3] & 0x400U) == 0)) {
        param_1[6] = 0x1000;
      }
      param_1[1] = param_1[1] + -1;
      uVar3 = (uint)*(byte *)*param_1;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    param_1[3] = param_1[3] | 0x20;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/*
 * FUN_10005cf0 at 10005cf0
 * int __cdecl FUN_10005cf0(uint param_1, char * param_2, DWORD param_3)
 * Address ranges: 10005cf0-10005d71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10005cf0(uint param_1,char *param_2,DWORD param_3)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  int iVar3;
  
  if ((param_1 < DAT_10031bfc) &&
     ((*(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100029d0(param_1);
    iVar3 = FUN_10005d80(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    pDVar2 = FUN_10006f30();
    *pDVar2 = 0;
    iVar3 = -1;
  }
  return iVar3;
}


/*
 * FUN_10005d80 at 10005d80
 * int __cdecl FUN_10005d80(uint param_1, char * param_2, DWORD param_3)
 * Address ranges: 10005d80-100061c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10005d80(uint param_1,char *param_2,DWORD param_3)

{
  BOOL BVar1;
  undefined4 *puVar2;
  DWORD *pDVar3;
  int iVar4;
  char local_20 [4];
  int local_1c;
  char *local_18;
  DWORD local_14;
  char *local_10;
  DWORD local_c;
  char *local_8;
  
  local_1c = 0;
  local_18 = param_2;
  if ((param_3 == 0) ||
     (iVar4 = (int)param_1 >> 5,
     (*(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 2) != 0)) {
    local_1c = 0;
  }
  else {
    if (((*(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x48) != 0) &&
       (*(char *)((&DAT_10031ac0)[iVar4] + 5 + (param_1 & 0x1f) * 0x24) != '\n')) {
      *param_2 = *(char *)((&DAT_10031ac0)[iVar4] + 5 + (param_1 & 0x1f) * 0x24);
      local_18 = param_2 + 1;
      local_1c = 1;
      param_3 = param_3 - 1;
      *(undefined1 *)((&DAT_10031ac0)[iVar4] + 5 + (param_1 & 0x1f) * 0x24) = 10;
    }
    BVar1 = ReadFile(*(HANDLE *)((&DAT_10031ac0)[iVar4] + (param_1 & 0x1f) * 0x24),local_18,param_3,
                     &local_14,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      local_c = GetLastError();
      if (local_c == 5) {
        puVar2 = (undefined4 *)FUN_10006f20();
        *puVar2 = 9;
        pDVar3 = FUN_10006f30();
        *pDVar3 = local_c;
        local_1c = -1;
      }
      else if (local_c == 0x6d) {
        local_1c = 0;
      }
      else {
        __dosmaperr(local_c);
        local_1c = -1;
      }
    }
    else {
      local_1c = local_1c + local_14;
      if (((int)*(char *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x80U) != 0) {
        if ((local_14 == 0) || (*param_2 != '\n')) {
          *(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) =
               *(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0xfb;
        }
        else {
          *(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) =
               *(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) | 4;
        }
        local_10 = param_2;
        local_8 = param_2;
        while (local_8 < param_2 + local_1c) {
          if (*local_8 == '\x1a') {
            if ((*(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x40) == 0) {
              *(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) =
                   *(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) | 2;
            }
            break;
          }
          if (*local_8 == '\r') {
            if (local_8 < param_2 + local_1c + -1) {
              if (local_8[1] == '\n') {
                local_8 = local_8 + 2;
                *local_10 = '\n';
              }
              else {
                *local_10 = *local_8;
                local_8 = local_8 + 1;
              }
              local_10 = local_10 + 1;
            }
            else {
              local_8 = local_8 + 1;
              local_c = 0;
              BVar1 = ReadFile(*(HANDLE *)((&DAT_10031ac0)[iVar4] + (param_1 & 0x1f) * 0x24),
                               local_20,1,&local_14,(LPOVERLAPPED)0x0);
              if (BVar1 == 0) {
                local_c = GetLastError();
              }
              if ((local_c == 0) && (local_14 != 0)) {
                if ((*(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x48) == 0) {
                  if ((local_10 == param_2) && (local_20[0] == '\n')) {
                    *local_10 = '\n';
                    local_10 = local_10 + 1;
                  }
                  else {
                    FUN_10006ab0(param_1,-1,1);
                    if (local_20[0] != '\n') {
                      *local_10 = '\r';
                      local_10 = local_10 + 1;
                    }
                  }
                }
                else {
                  if (local_20[0] == '\n') {
                    *local_10 = '\n';
                  }
                  else {
                    *local_10 = '\r';
                    *(char *)((&DAT_10031ac0)[iVar4] + 5 + (param_1 & 0x1f) * 0x24) = local_20[0];
                  }
                  local_10 = local_10 + 1;
                }
              }
              else {
                *local_10 = '\r';
                local_10 = local_10 + 1;
              }
            }
          }
          else {
            *local_10 = *local_8;
            local_10 = local_10 + 1;
            local_8 = local_8 + 1;
          }
        }
        local_1c = (int)local_10 - (int)param_2;
      }
    }
  }
  return local_1c;
}


/*
 * FUN_100061d0 at 100061d0
 * undefined4 * __cdecl FUN_100061d0(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 100061d0-1000622a;1000622c-10006232;10006240-10006268;1000626c-1000628e;10006290-100062a8;100062cc-10006315;10006328-1000632e;10006330-1000633a;1000633c-1000634c;10006350-10006366;10006368-1000638d;10006390-10006398;1000639c-100063ba;100063c8-100063e4;100063e8-1000640e;10006410-10006440;10006464-100064ad;100064c0-100064c6;100064c8-100064d4;100064d8-100064ea;100064ec-10006504
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * __cdecl FUN_100061d0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_10006387_caseD_2;
        case 3:
          goto switchD_10006387_caseD_3;
        }
        goto switchD_10006387_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10006387_caseD_0;
      case 1:
        goto switchD_10006387_caseD_1;
      case 2:
        goto switchD_10006387_caseD_2;
      case 3:
        goto switchD_10006387_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10006387_caseD_2;
            case 3:
              goto switchD_10006387_caseD_3;
            }
            goto switchD_10006387_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10006387_caseD_2;
            case 3:
              goto switchD_10006387_caseD_3;
            }
            goto switchD_10006387_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10006387_caseD_2;
            case 3:
              goto switchD_10006387_caseD_3;
            }
            goto switchD_10006387_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_10006387_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10006387_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10006387_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10006387_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_10006205_caseD_2;
      case 3:
        goto switchD_10006205_caseD_3;
      }
      goto switchD_10006205_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10006205_caseD_0;
    case 1:
      goto switchD_10006205_caseD_1;
    case 2:
      goto switchD_10006205_caseD_2;
    case 3:
      goto switchD_10006205_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10006205_caseD_2;
          case 3:
            goto switchD_10006205_caseD_3;
          }
          goto switchD_10006205_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10006205_caseD_2;
          case 3:
            goto switchD_10006205_caseD_3;
          }
          goto switchD_10006205_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10006205_caseD_2;
          case 3:
            goto switchD_10006205_caseD_3;
          }
          goto switchD_10006205_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_10006205_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10006205_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10006205_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10006205_caseD_0:
  return param_1;
}


/*
 * FUN_10006510 at 10006510
 * undefined4 * __cdecl FUN_10006510(LPCSTR param_1, char * param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 10006510-1000682c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * __cdecl
FUN_10006510(LPCSTR param_1,char *param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint local_20;
  uint local_18;
  
  local_20 = DAT_10031624;
  bVar4 = false;
  bVar5 = false;
  if ((param_1 == (LPCSTR)0x0) &&
     (iVar6 = FUN_10003050(2,0x1002cb34,0x47,0,(byte *)"filename != NULL"), iVar6 == 1)) {
    pcVar2 = (code *)swi(3);
    puVar7 = (undefined4 *)(*pcVar2)();
    return puVar7;
  }
  if ((param_2 == (char *)0x0) &&
     (iVar6 = FUN_10003050(2,0x1002cb34,0x48,0,(byte *)"mode != NULL"), iVar6 == 1)) {
    pcVar2 = (code *)swi(3);
    puVar7 = (undefined4 *)(*pcVar2)();
    return puVar7;
  }
  if ((param_4 == (undefined4 *)0x0) &&
     (iVar6 = FUN_10003050(2,0x1002cb34,0x49,0,(byte *)"str != NULL"), iVar6 == 1)) {
    pcVar2 = (code *)swi(3);
    puVar7 = (undefined4 *)(*pcVar2)();
    return puVar7;
  }
  cVar1 = *param_2;
  if (cVar1 == 'a') {
    local_18 = 0x109;
    local_20 = local_20 | 2;
  }
  else if (cVar1 == 'r') {
    local_18 = 0;
    local_20 = local_20 | 1;
  }
  else {
    if (cVar1 != 'w') {
      return (undefined4 *)0x0;
    }
    local_18 = 0x301;
    local_20 = local_20 | 2;
  }
  bVar3 = true;
  while ((param_2 = param_2 + 1, *param_2 != '\0' && (bVar3))) {
    switch(*param_2) {
    case '+':
      if ((local_18 & 2) == 0) {
        local_18 = local_18 & 0xfffffffe | 2;
        local_20 = local_20 & 0xfffffffc | 0x80;
      }
      else {
        bVar3 = false;
      }
      break;
    default:
      bVar3 = false;
      break;
    case 'D':
      if ((local_18 & 0x40) == 0) {
        local_18 = local_18 | 0x40;
      }
      else {
        bVar3 = false;
      }
      break;
    case 'R':
      if (bVar5) {
        bVar3 = false;
      }
      else {
        bVar5 = true;
        local_18 = local_18 | 0x10;
      }
      break;
    case 'S':
      if (bVar5) {
        bVar3 = false;
      }
      else {
        bVar5 = true;
        local_18 = local_18 | 0x20;
      }
      break;
    case 'T':
      if ((local_18 & 0x1000) == 0) {
        local_18 = local_18 | 0x1000;
      }
      else {
        bVar3 = false;
      }
      break;
    case 'b':
      if ((local_18 & 0xc000) == 0) {
        local_18 = local_18 | 0x8000;
      }
      else {
        bVar3 = false;
      }
      break;
    case 'c':
      if (bVar4) {
        bVar3 = false;
      }
      else {
        bVar4 = true;
        local_20 = local_20 | 0x4000;
      }
      break;
    case 'n':
      if (bVar4) {
        bVar3 = false;
      }
      else {
        bVar4 = true;
        local_20 = local_20 & 0xffffbfff;
      }
      break;
    case 't':
      if ((local_18 & 0xc000) == 0) {
        local_18 = local_18 | 0x4000;
      }
      else {
        bVar3 = false;
      }
    }
  }
  uVar8 = FUN_1000bc00(param_1,local_18,param_3,0x1a4);
  if ((int)uVar8 < 0) {
    param_4 = (undefined4 *)0x0;
  }
  else {
    DAT_1003142c = DAT_1003142c + 1;
    param_4[3] = local_20;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[2] = 0;
    param_4[7] = 0;
    param_4[4] = uVar8;
  }
  return param_4;
}


/*
 * FUN_100068a0 at 100068a0
 * undefined4 * __stdcall FUN_100068a0(void)
 * Address ranges: 100068a0-10006a1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * FUN_100068a0(void)

{
  undefined4 uVar1;
  undefined4 *local_c;
  int local_8;
  
  local_c = (undefined4 *)0x0;
  FUN_100073f0(2);
  local_8 = 0;
  do {
    if (DAT_10032f60 <= local_8) {
LAB_100069ce:
      if (local_c != (undefined4 *)0x0) {
        local_c[1] = 0;
        local_c[3] = 0;
        local_c[2] = 0;
        *local_c = 0;
        local_c[7] = 0;
        local_c[4] = 0xffffffff;
      }
      FUN_10007490(2);
      return local_c;
    }
    if (*(int *)(DAT_10031c18 + local_8 * 4) == 0) {
      uVar1 = FUN_10003710((void *)0x38,2,0x1002cb50,0x55);
      *(undefined4 *)(DAT_10031c18 + local_8 * 4) = uVar1;
      if (*(int *)(DAT_10031c18 + local_8 * 4) != 0) {
        InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_10031c18 + local_8 * 4) + 0x20))
        ;
        EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_10031c18 + local_8 * 4) + 0x20));
        local_c = *(undefined4 **)(DAT_10031c18 + local_8 * 4);
      }
      goto LAB_100069ce;
    }
    if ((*(uint *)(*(int *)(DAT_10031c18 + local_8 * 4) + 0xc) & 0x83) == 0) {
      FUN_10002ea0(local_8,*(int *)(DAT_10031c18 + local_8 * 4));
      if ((*(uint *)(*(int *)(DAT_10031c18 + local_8 * 4) + 0xc) & 0x83) == 0) {
        local_c = *(undefined4 **)(DAT_10031c18 + local_8 * 4);
        goto LAB_100069ce;
      }
      FUN_10002f10(local_8,*(int *)(DAT_10031c18 + local_8 * 4));
    }
    local_8 = local_8 + 1;
  } while( true );
}


/*
 * FUN_10006a20 at 10006a20
 * DWORD __cdecl FUN_10006a20(uint param_1, LONG param_2, DWORD param_3)
 * Address ranges: 10006a20-10006aa1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


DWORD __cdecl FUN_10006a20(uint param_1,LONG param_2,DWORD param_3)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  
  if ((param_1 < DAT_10031bfc) &&
     ((*(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100029d0(param_1);
    DVar3 = FUN_10006ab0(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    pDVar2 = FUN_10006f30();
    *pDVar2 = 0;
    DVar3 = 0xffffffff;
  }
  return DVar3;
}


/*
 * FUN_10006ab0 at 10006ab0
 * DWORD __cdecl FUN_10006ab0(uint param_1, LONG param_2, DWORD param_3)
 * Address ranges: 10006ab0-10006b61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


DWORD __cdecl FUN_10006ab0(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  undefined4 *puVar1;
  DWORD DVar2;
  ulong local_8;
  
  hFile = (HANDLE)FUN_10002850(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    DVar2 = 0xffffffff;
  }
  else {
    DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
    if (DVar2 == 0xffffffff) {
      local_8 = GetLastError();
    }
    else {
      local_8 = 0;
    }
    if (local_8 == 0) {
      *(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
           *(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
    }
    else {
      __dosmaperr(local_8);
      DVar2 = 0xffffffff;
    }
  }
  return DVar2;
}


/*
 * FUN_10006b70 at 10006b70
 * int __cdecl FUN_10006b70(undefined * * param_1)
 * Address ranges: 10006b70-10006bd1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10006b70(undefined **param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002cb5c,0x32,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_10002e60(param_1);
  iVar2 = FUN_10006be0((uint *)param_1);
  FUN_10002ed0(param_1);
  return iVar2;
}


/*
 * FUN_10006be0 at 10006be0
 * int __cdecl FUN_10006be0(uint * param_1)
 * Address ranges: 10006be0-10006e79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10006be0(uint *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  char *pcVar6;
  DWORD local_20;
  int local_1c;
  uint local_14;
  char *local_8;
  
  if ((param_1 == (uint *)0x0) &&
     (iVar3 = FUN_10003050(2,0x1002cb5c,99,0,(byte *)"str != NULL"), iVar3 == 1)) {
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  uVar1 = param_1[4];
  if ((int)param_1[1] < 0) {
    param_1[1] = 0;
  }
  local_20 = FUN_10006a20(uVar1,0,1);
  if ((int)local_20 < 0) {
    local_1c = -1;
  }
  else if ((param_1[3] & 0x108) == 0) {
    local_1c = local_20 - param_1[1];
  }
  else {
    local_1c = *param_1 - param_1[2];
    iVar3 = (int)uVar1 >> 5;
    if ((param_1[3] & 3) == 0) {
      if ((param_1[3] & 0x80) == 0) {
        puVar4 = (undefined4 *)FUN_10006f20();
        *puVar4 = 0x16;
        return -1;
      }
    }
    else if (((int)*(char *)((&DAT_10031ac0)[iVar3] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80U) != 0) {
      for (local_8 = (char *)param_1[2]; local_8 < (char *)*param_1; local_8 = local_8 + 1) {
        if (*local_8 == '\n') {
          local_1c = local_1c + 1;
        }
      }
    }
    if (local_20 != 0) {
      if ((param_1[3] & 1) != 0) {
        if (param_1[1] == 0) {
          local_1c = 0;
        }
        else {
          local_14 = param_1[1] + (*param_1 - param_1[2]);
          if (((int)*(char *)((&DAT_10031ac0)[iVar3] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80U) != 0) {
            DVar5 = FUN_10006a20(uVar1,0,2);
            if (DVar5 == local_20) {
              pcVar6 = (char *)(param_1[2] + local_14);
              for (local_8 = (char *)param_1[2]; local_8 < pcVar6; local_8 = local_8 + 1) {
                if (*local_8 == '\n') {
                  local_14 = local_14 + 1;
                }
              }
              if ((param_1[3] & 0x2000) != 0) {
                local_14 = local_14 + 1;
              }
            }
            else {
              FUN_10006a20(uVar1,local_20,0);
              if (((local_14 < 0x201) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
                local_14 = 0x200;
              }
              else {
                local_14 = param_1[6];
              }
              if ((*(byte *)((&DAT_10031ac0)[iVar3] + 4 + (uVar1 & 0x1f) * 0x24) & 4) != 0) {
                local_14 = local_14 + 1;
              }
            }
          }
          local_20 = local_20 - local_14;
        }
      }
      local_1c = local_20 + local_1c;
    }
  }
  return local_1c;
}


/*
 * __dosmaperr at 10006e80
 * void __cdecl __dosmaperr(ulong param_1)
 * Address ranges: 10006e80-10006f10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __dosmaperr  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __dosmaperr
   
   Library: Visual Studio 2003 Debug */

void __cdecl __dosmaperr(ulong param_1)

{
  DWORD *pDVar1;
  undefined4 *puVar2;
  uint local_8;
  
  pDVar1 = FUN_10006f30();
  *pDVar1 = param_1;
  local_8 = 0;
  while( true ) {
    if (0x2c < local_8) {
      if ((param_1 < 0x13) || (0x24 < param_1)) {
        if ((param_1 < 0xbc) || (0xca < param_1)) {
          puVar2 = (undefined4 *)FUN_10006f20();
          *puVar2 = 0x16;
        }
        else {
          puVar2 = (undefined4 *)FUN_10006f20();
          *puVar2 = 8;
        }
      }
      else {
        puVar2 = (undefined4 *)FUN_10006f20();
        *puVar2 = 0xd;
      }
      return;
    }
    if (param_1 == *(ulong *)(&DAT_1002fd10 + local_8 * 8)) break;
    local_8 = local_8 + 1;
  }
  puVar2 = (undefined4 *)FUN_10006f20();
  *puVar2 = *(undefined4 *)(&DAT_1002fd14 + local_8 * 8);
  return;
}


/*
 * FUN_10006f20 at 10006f20
 * int __stdcall FUN_10006f20(void)
 * Address ranges: 10006f20-10006f2c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_10006f20(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100077b0();
  return (int)(pDVar1 + 2);
}


/*
 * FUN_10006f30 at 10006f30
 * DWORD * __stdcall FUN_10006f30(void)
 * Address ranges: 10006f30-10006f3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


DWORD * FUN_10006f30(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100077b0();
  return pDVar1 + 3;
}


/*
 * FUN_10006f40 at 10006f40
 * undefined __stdcall FUN_10006f40(void)
 * Address ranges: 10006f40-10007263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10006f40(void)

{
  DWORD DVar1;
  HANDLE hFile;
  undefined4 *puVar2;
  int *piVar3;
  DWORD local_70;
  UINT local_6c;
  UINT local_68;
  byte *local_64;
  int local_60;
  uint local_5c;
  undefined4 *local_54;
  _STARTUPINFOA local_4c;
  byte *local_8;
  
  local_54 = (undefined4 *)FUN_10003710((void *)0x480,2,0x1002cb64,0x81);
  if (local_54 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_10031bfc = 0x20;
  DAT_10031ac0 = local_54;
  for (; local_54 < DAT_10031ac0 + 0x120; local_54 = local_54 + 9) {
    *(undefined1 *)(local_54 + 1) = 0;
    *local_54 = 0xffffffff;
    *(undefined1 *)((int)local_54 + 5) = 10;
    local_54[2] = 0;
  }
  GetStartupInfoA(&local_4c);
  if ((local_4c.cbReserved2 != 0) &&
     (CONCAT22(local_4c.lpReserved2._2_2_,local_4c.lpReserved2._0_2_) != 0)) {
    local_6c = *(UINT *)CONCAT22(local_4c.lpReserved2._2_2_,local_4c.lpReserved2._0_2_);
    local_8 = (byte *)(CONCAT22(local_4c.lpReserved2._2_2_,local_4c.lpReserved2._0_2_) + 4);
    local_64 = local_8 + local_6c;
    if (0x7ff < (int)local_6c) {
      local_6c = 0x800;
    }
    local_68 = local_6c;
    local_60 = 1;
    while ((int)DAT_10031bfc < (int)local_6c) {
      local_54 = (undefined4 *)FUN_10003710((void *)0x480,2,0x1002cb64,0xb6);
      if (local_54 == (undefined4 *)0x0) {
        local_68 = DAT_10031bfc;
        break;
      }
      (&DAT_10031ac0)[local_60] = local_54;
      DAT_10031bfc = DAT_10031bfc + 0x20;
      for (; local_54 < (undefined4 *)((int)(&DAT_10031ac0)[local_60] + 0x480);
          local_54 = local_54 + 9) {
        *(undefined1 *)(local_54 + 1) = 0;
        *local_54 = 0xffffffff;
        *(undefined1 *)((int)local_54 + 5) = 10;
        local_54[2] = 0;
      }
      local_60 = local_60 + 1;
    }
    for (local_5c = 0; (int)local_5c < (int)local_68; local_5c = local_5c + 1) {
      if (((*(int *)local_64 != -1) && ((*local_8 & 1) != 0)) &&
         (((*local_8 & 8) != 0 || (DVar1 = GetFileType(*(HANDLE *)local_64), DVar1 != 0)))) {
        puVar2 = (undefined4 *)((int)(&DAT_10031ac0)[(int)local_5c >> 5] + (local_5c & 0x1f) * 0x24)
        ;
        *puVar2 = *(undefined4 *)local_64;
        *(byte *)(puVar2 + 1) = *local_8;
      }
      local_8 = local_8 + 1;
      local_64 = local_64 + 4;
    }
  }
  for (local_5c = 0; (int)local_5c < 3; local_5c = local_5c + 1) {
    piVar3 = DAT_10031ac0 + local_5c * 9;
    if (*piVar3 == -1) {
      *(undefined1 *)(piVar3 + 1) = 0x81;
      if (local_5c == 0) {
        local_70 = 0xfffffff6;
      }
      else {
        local_70 = 0xfffffff5 - (local_5c != 1);
      }
      hFile = GetStdHandle(local_70);
      if ((hFile == (HANDLE)0xffffffff) || (DVar1 = GetFileType(hFile), DVar1 == 0)) {
        *(byte *)(piVar3 + 1) = *(byte *)(piVar3 + 1) | 0x40;
      }
      else {
        *piVar3 = (int)hFile;
        if ((DVar1 & 0xff) == 2) {
          *(byte *)(piVar3 + 1) = *(byte *)(piVar3 + 1) | 0x40;
        }
        else if ((DVar1 & 0xff) == 3) {
          *(byte *)(piVar3 + 1) = *(byte *)(piVar3 + 1) | 8;
        }
      }
    }
    else {
      *(byte *)(piVar3 + 1) = *(byte *)(piVar3 + 1) | 0x80;
    }
  }
  SetHandleCount(DAT_10031bfc);
  return;
}


/*
 * __ioterm at 10007270
 * void __cdecl __ioterm(void)
 * Address ranges: 10007270-1000730a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __ioterm  Library: Visual Studio
 */


/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio */

void __cdecl __ioterm(void)

{
  int local_c;
  uint local_8;
  
  for (local_c = 0; local_c < 0x40; local_c = local_c + 1) {
    if ((&DAT_10031ac0)[local_c] != 0) {
      for (local_8 = (&DAT_10031ac0)[local_c]; local_8 < (&DAT_10031ac0)[local_c] + 0x480;
          local_8 = local_8 + 0x24) {
        if (*(int *)(local_8 + 8) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(local_8 + 0xc));
        }
      }
      FUN_100041a0((void *)(&DAT_10031ac0)[local_c],2);
      (&DAT_10031ac0)[local_c] = 0;
    }
  }
  return;
}


/*
 * FUN_10007310 at 10007310
 * undefined __stdcall FUN_10007310(void)
 * Address ranges: 10007310-10007346
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10007310(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002fee0);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002fed0);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002fec0);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002fea0);
  return;
}


/*
 * FUN_10007350 at 10007350
 * undefined __stdcall FUN_10007350(void)
 * Address ranges: 10007350-100073ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10007350(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x30; local_8 = local_8 + 1) {
    if ((((*(int *)(&DAT_1002fe9c + local_8 * 4) != 0) && (local_8 != 0x11)) && (local_8 != 0xd)) &&
       ((local_8 != 9 && (local_8 != 1)))) {
      DeleteCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_1002fe9c + local_8 * 4));
      FUN_100041a0(*(void **)(&DAT_1002fe9c + local_8 * 4),2);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002fec0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002fed0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002fee0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002fea0);
  return;
}


/*
 * FUN_100073f0 at 100073f0
 * undefined __cdecl FUN_100073f0(int param_1)
 * Address ranges: 100073f0-10007486
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100073f0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (*(int *)(&DAT_1002fe9c + param_1 * 4) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_10003710((void *)0x18,2,0x1002cb70,0xe1);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_100073f0(0x11);
    if (*(int *)(&DAT_1002fe9c + param_1 * 4) == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *(LPCRITICAL_SECTION *)(&DAT_1002fe9c + param_1 * 4) = lpCriticalSection;
    }
    else {
      FUN_100041a0(lpCriticalSection,2);
    }
    FUN_10007490(0x11);
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_1002fe9c + param_1 * 4));
  return;
}


/*
 * FUN_10007490 at 10007490
 * undefined __cdecl FUN_10007490(int param_1)
 * Address ranges: 10007490-100074a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10007490(int param_1)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_1002fe9c + param_1 * 4));
  return;
}


/*
 * FUN_100074b0 at 100074b0
 * undefined __cdecl FUN_100074b0(LPCSTR param_1)
 * Address ranges: 100074b0-100074c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100074b0(LPCSTR param_1)

{
  FatalAppExitA(0,param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0xff);
}


/*
 * FUN_100074d0 at 100074d0
 * undefined __stdcall FUN_100074d0(void)
 * Address ranges: 100074d0-10007507
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_100074d0(void)

{
  if (DAT_10031ab4 != (code *)0x0) {
    (*DAT_10031ab4)();
  }
  __initterm((int *)&DAT_1002f208,(int *)&DAT_1002f418);
  __initterm((int *)&DAT_1002f000,(int *)&DAT_1002f104);
  return;
}


/*
 * FUN_10007510 at 10007510
 * undefined __cdecl FUN_10007510(UINT param_1)
 * Address ranges: 10007510-10007524
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10007510(UINT param_1)

{
  FUN_10007590(param_1,0,0);
  return;
}


/*
 * __exit at 10007530
 * noreturn void __cdecl __exit(int _Code)
 * Address ranges: 10007530-10007544
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __exit  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __exit(int _Code)

{
  FUN_10007590(_Code,1,0);
  return;
}


/*
 * FUN_10007550 at 10007550
 * undefined __stdcall FUN_10007550(void)
 * Address ranges: 10007550-10007562
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10007550(void)

{
  FUN_10007590(0,0,1);
  return;
}


/*
 * FUN_10007570 at 10007570
 * undefined __stdcall FUN_10007570(void)
 * Address ranges: 10007570-10007582
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10007570(void)

{
  FUN_10007590(0,1,1);
  return;
}


/*
 * FUN_10007590 at 10007590
 * undefined __cdecl FUN_10007590(UINT param_1, int param_2, int param_3)
 * Address ranges: 10007590-10007672
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10007590(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  uint uVar1;
  UINT uExitCode;
  int *local_8;
  
  FUN_10007680();
  if (DAT_100314e8 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_100314e4 = 1;
  DAT_100314e0 = (undefined1)param_3;
  if (param_2 == 0) {
    if (DAT_10031ab0 != (int *)0x0) {
      local_8 = DAT_10031aac;
      while (local_8 = local_8 + -1, DAT_10031ab0 <= local_8) {
        if (*local_8 != 0) {
          (*(code *)*local_8)();
        }
      }
    }
    __initterm((int *)&DAT_1002f51c,(int *)&DAT_1002f724);
  }
  __initterm((int *)&DAT_1002f828,(int *)&DAT_1002f92c);
  if ((DAT_100314ec == 0) && (uVar1 = FUN_10004c20(-1), (uVar1 & 0x20) != 0)) {
    DAT_100314ec = 1;
    FUN_10005530();
  }
  if (param_3 == 0) {
    DAT_100314e8 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10007690();
  return;
}


/*
 * FUN_10007680 at 10007680
 * undefined __stdcall FUN_10007680(void)
 * Address ranges: 10007680-1000768e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10007680(void)

{
  FUN_100073f0(0xd);
  return;
}


/*
 * FUN_10007690 at 10007690
 * undefined __stdcall FUN_10007690(void)
 * Address ranges: 10007690-1000769e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10007690(void)

{
  FUN_10007490(0xd);
  return;
}


/*
 * __initterm at 100076a0
 * undefined __cdecl __initterm(int * param_1, int * param_2)
 * Address ranges: 100076a0-100076c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __initterm  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __initterm
   
   Library: Visual Studio 2003 Debug */

void __cdecl __initterm(int *param_1,int *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if (*param_1 != 0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


/*
 * FUN_100076d0 at 100076d0
 * undefined4 __stdcall FUN_100076d0(void)
 * Address ranges: 100076d0-10007751
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_100076d0(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10007310();
  DAT_1002ff5c = TlsAlloc();
  if (((DAT_1002ff5c != 0xffffffff) &&
      (lpTlsValue = (DWORD *)__calloc_dbg(1,0x74,2,"tidtable.c",0x61), lpTlsValue != (DWORD *)0x0))
     && (BVar1 = TlsSetValue(DAT_1002ff5c,lpTlsValue), BVar1 != 0)) {
    FUN_10007790((int)lpTlsValue);
    DVar2 = GetCurrentThreadId();
    *lpTlsValue = DVar2;
    lpTlsValue[1] = 0xffffffff;
    return 1;
  }
  return 0;
}


/*
 * FUN_10007760 at 10007760
 * undefined __stdcall FUN_10007760(void)
 * Address ranges: 10007760-10007788
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10007760(void)

{
  FUN_10007350();
  if (DAT_1002ff5c != 0xffffffff) {
    TlsFree(DAT_1002ff5c);
    DAT_1002ff5c = 0xffffffff;
  }
  return;
}


/*
 * FUN_10007790 at 10007790
 * undefined __cdecl FUN_10007790(int param_1)
 * Address ranges: 10007790-100077a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10007790(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10030220;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}


/*
 * FUN_100077b0 at 100077b0
 * DWORD * __stdcall FUN_100077b0(void)
 * Address ranges: 100077b0-10007847
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


DWORD * FUN_100077b0(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *local_8;
  
  dwErrCode = GetLastError();
  local_8 = TlsGetValue(DAT_1002ff5c);
  if (local_8 == (DWORD *)0x0) {
    local_8 = (DWORD *)__calloc_dbg(1,0x74,2,"tidtable.c",0xe7);
    if (local_8 != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1002ff5c,local_8);
      if (BVar1 != 0) {
        FUN_10007790((int)local_8);
        DVar2 = GetCurrentThreadId();
        *local_8 = DVar2;
        local_8[1] = 0xffffffff;
        goto LAB_10007837;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10007837:
  SetLastError(dwErrCode);
  return local_8;
}


/*
 * FUN_10007850 at 10007850
 * undefined __cdecl FUN_10007850(LPVOID param_1)
 * Address ranges: 10007850-10007956
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10007850(LPVOID param_1)

{
  if (DAT_1002ff5c != 0xffffffff) {
    if (param_1 == (LPVOID)0x0) {
      param_1 = TlsGetValue(DAT_1002ff5c);
    }
    if (param_1 != (LPVOID)0x0) {
      if (*(int *)((int)param_1 + 0x24) != 0) {
        FUN_100041a0(*(void **)((int)param_1 + 0x24),2);
      }
      if (*(int *)((int)param_1 + 0x28) != 0) {
        FUN_100041a0(*(void **)((int)param_1 + 0x28),2);
      }
      if (*(int *)((int)param_1 + 0x30) != 0) {
        FUN_100041a0(*(void **)((int)param_1 + 0x30),2);
      }
      if (*(int *)((int)param_1 + 0x38) != 0) {
        FUN_100041a0(*(void **)((int)param_1 + 0x38),2);
      }
      if (*(int *)((int)param_1 + 0x40) != 0) {
        FUN_100041a0(*(void **)((int)param_1 + 0x40),2);
      }
      if (*(int *)((int)param_1 + 0x44) != 0) {
        FUN_100041a0(*(void **)((int)param_1 + 0x44),2);
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_10030220) {
        FUN_100041a0(*(void **)((int)param_1 + 0x50),2);
      }
      FUN_100041a0(param_1,2);
    }
    TlsSetValue(DAT_1002ff5c,(LPVOID)0x0);
  }
  return;
}


/*
 * FUN_10007960 at 10007960
 * undefined __stdcall FUN_10007960(void)
 * Address ranges: 10007960-1000796a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10007960(void)

{
  GetCurrentThreadId();
  return;
}


/*
 * FUN_10007970 at 10007970
 * undefined __stdcall FUN_10007970(void)
 * Address ranges: 10007970-1000797a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10007970(void)

{
  GetCurrentThread();
  return;
}


/*
 * FUN_10007980 at 10007980
 * undefined __stdcall FUN_10007980(void)
 * Address ranges: 10007980-10007ac8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10007980(void)

{
  size_t sVar1;
  int iVar2;
  int *local_10;
  int local_c;
  uint *local_8;
  
  if (DAT_10031aa8 == 0) {
    FUN_1000cb60();
  }
  local_c = 0;
  for (local_8 = DAT_1003141c; (char)*local_8 != '\0'; local_8 = (uint *)((int)local_8 + sVar1 + 1))
  {
    if ((char)*local_8 != '=') {
      local_c = local_c + 1;
    }
    sVar1 = _strlen((char *)local_8);
  }
  local_10 = (int *)FUN_10003710((void *)(local_c * 4 + 4),2,0x1002cb84,0x6d);
  DAT_100314c8 = local_10;
  if (local_10 == (int *)0x0) {
    __amsg_exit(9);
  }
  for (local_8 = DAT_1003141c; (char)*local_8 != '\0';
      local_8 = (uint *)((int)local_8 + (int)(sVar1 + 1))) {
    sVar1 = _strlen((char *)local_8);
    if ((char)*local_8 != '=') {
      iVar2 = FUN_10003710((void *)(sVar1 + 1),2,0x1002cb84,0x79);
      *local_10 = iVar2;
      if (*local_10 == 0) {
        __amsg_exit(9);
      }
      FUN_10001ec0((uint *)*local_10,local_8);
      local_10 = local_10 + 1;
    }
  }
  FUN_100041a0(DAT_1003141c,2);
  DAT_1003141c = (uint *)0x0;
  *local_10 = 0;
  DAT_10031a98 = 1;
  return;
}


/*
 * FUN_10007ad0 at 10007ad0
 * undefined __stdcall FUN_10007ad0(void)
 * Address ranges: 10007ad0-10007ba7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007ad0(void)

{
  byte *local_18;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  if (DAT_10031aa8 == 0) {
    FUN_1000cb60();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_100314f0,0x104);
  DAT_100314d8 = &DAT_100314f0;
  if (*DAT_10032f64 == 0) {
    local_18 = &DAT_100314f0;
  }
  else {
    local_18 = DAT_10032f64;
  }
  FUN_10007bb0(local_18,(undefined4 *)0x0,(byte *)0x0,&local_10,&local_8);
  local_c = (undefined4 *)FUN_10003710((void *)(local_8 + local_10 * 4),2,0x1002cb90,0x80);
  if (local_c == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10007bb0(local_18,local_c,(byte *)(local_c + local_10),&local_10,&local_8);
  _DAT_100314bc = local_10 + -1;
  _DAT_100314c0 = local_c;
  return;
}


/*
 * FUN_10007bb0 at 10007bb0
 * undefined __cdecl FUN_10007bb0(byte * param_1, undefined4 * param_2, byte * param_3, int * param_4, int * param_5)
 * Address ranges: 10007bb0-10007fd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10007bb0(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  bool bVar4;
  uint local_14;
  byte *local_8;
  
  *param_5 = 0;
  *param_4 = 1;
  local_8 = param_1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    while ((pbVar3 = local_8 + 1, *pbVar3 != 0x22 && (*pbVar3 != 0))) {
      if ((((&DAT_10031961)[*pbVar3] & 4) != 0) && (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)
         ) {
        *param_3 = *pbVar3;
        param_3 = param_3 + 1;
        pbVar3 = local_8 + 2;
      }
      local_8 = pbVar3;
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *local_8;
        param_3 = param_3 + 1;
      }
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar3 == 0x22) {
      pbVar3 = local_8 + 2;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *local_8;
        param_3 = param_3 + 1;
      }
      bVar1 = *local_8;
      pbVar3 = local_8 + 1;
      if (((&DAT_10031961)[bVar1] & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = local_8[1];
          param_3 = param_3 + 1;
        }
        pbVar3 = local_8 + 2;
      }
      local_8 = pbVar3;
    } while (((bVar1 != 0x20) && (bVar1 != 0)) && (bVar1 != 9));
    if (bVar1 == 0) {
      pbVar3 = local_8 + -1;
    }
    else {
      pbVar3 = local_8;
      if (param_3 != (byte *)0x0) {
        param_3[-1] = 0;
      }
    }
  }
  local_8 = pbVar3;
  bVar2 = false;
  while( true ) {
    if (*local_8 != 0) {
      for (; (*local_8 == 0x20 || (*local_8 == 9)); local_8 = local_8 + 1) {
      }
    }
    if (*local_8 == 0) break;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar4 = true;
      local_14 = 0;
      for (; *local_8 == 0x5c; local_8 = local_8 + 1) {
        local_14 = local_14 + 1;
      }
      if (*local_8 == 0x22) {
        if (local_14 % 2 == 0) {
          if (bVar2) {
            bVar4 = local_8[1] == 0x22;
            if (bVar4) {
              local_8 = local_8 + 1;
            }
          }
          else {
            bVar4 = false;
          }
          bVar2 = !bVar2;
        }
        local_14 = local_14 >> 1;
      }
      while (local_14 != 0) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
        local_14 = local_14 - 1;
      }
      if ((*local_8 == 0) || ((!bVar2 && ((*local_8 == 0x20 || (*local_8 == 9)))))) break;
      if (bVar4) {
        if (param_3 == (byte *)0x0) {
          if (((&DAT_10031961)[*local_8] & 4) != 0) {
            local_8 = local_8 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if (((&DAT_10031961)[*local_8] & 4) != 0) {
            *param_3 = *local_8;
            param_3 = param_3 + 1;
            local_8 = local_8 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *local_8;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      local_8 = local_8 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}


/*
 * FUN_10007fe0 at 10007fe0
 * LPSTR __stdcall FUN_10007fe0(void)
 * Address ranges: 10007fe0-100081f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


LPSTR FUN_10007fe0(void)

{
  char *pcVar1;
  LPWCH pWVar2;
  void *cbMultiByte;
  LPSTR pCVar3;
  int iVar4;
  LPCH local_1c;
  LPWCH local_18;
  char *local_10;
  LPWCH local_c;
  
  local_18 = (LPWCH)0x0;
  local_1c = (LPCH)0x0;
  if (DAT_100315f4 == 0) {
    local_18 = GetEnvironmentStringsW();
    if (local_18 == (LPWCH)0x0) {
      local_1c = GetEnvironmentStrings();
      if (local_1c == (LPCH)0x0) {
        return (LPSTR)0x0;
      }
      DAT_100315f4 = 2;
    }
    else {
      DAT_100315f4 = 1;
    }
  }
  if (DAT_100315f4 == 1) {
    if ((local_18 == (LPWCH)0x0) && (local_18 = GetEnvironmentStringsW(), local_18 == (LPWCH)0x0)) {
      pCVar3 = (LPSTR)0x0;
    }
    else {
      local_c = local_18;
      pWVar2 = local_c;
      while (local_c = pWVar2, *local_c != L'\0') {
        pWVar2 = local_c + 1;
        if (local_c[1] == L'\0') {
          pWVar2 = local_c + 2;
        }
      }
      iVar4 = ((int)local_c - (int)local_18 >> 1) + 1;
      cbMultiByte = (void *)WideCharToMultiByte(0,0,local_18,iVar4,(LPSTR)0x0,0,(LPCSTR)0x0,
                                                (LPBOOL)0x0);
      if ((cbMultiByte == (void *)0x0) ||
         (local_1c = (LPCH)FUN_10003710(cbMultiByte,2,0x1002cb9c,100), local_1c == (LPSTR)0x0)) {
        FreeEnvironmentStringsW(local_18);
        pCVar3 = (LPSTR)0x0;
      }
      else {
        iVar4 = WideCharToMultiByte(0,0,local_18,iVar4,local_1c,(int)cbMultiByte,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        if (iVar4 == 0) {
          FUN_100041a0(local_1c,2);
          local_1c = (LPSTR)0x0;
        }
        FreeEnvironmentStringsW(local_18);
        pCVar3 = local_1c;
      }
    }
  }
  else if (DAT_100315f4 == 2) {
    if ((local_1c == (LPCH)0x0) && (local_1c = GetEnvironmentStrings(), local_1c == (LPCH)0x0)) {
      pCVar3 = (LPSTR)0x0;
    }
    else {
      local_10 = local_1c;
      pcVar1 = local_10;
      while (local_10 = pcVar1, *local_10 != '\0') {
        pcVar1 = local_10 + 1;
        if (local_10[1] == '\0') {
          pcVar1 = local_10 + 2;
        }
      }
      pCVar3 = (LPSTR)FUN_10003710(local_10 + (1 - (int)local_1c),2,0x1002cb9c,0x8f);
      if (pCVar3 == (LPSTR)0x0) {
        FreeEnvironmentStringsA(local_1c);
        pCVar3 = (LPSTR)0x0;
      }
      else {
        FUN_100061d0((undefined4 *)pCVar3,(undefined4 *)local_1c,
                     (uint)(local_10 + (1 - (int)local_1c)));
        FreeEnvironmentStringsA(local_1c);
      }
    }
  }
  else {
    pCVar3 = (LPSTR)0x0;
  }
  return pCVar3;
}


/*
 * FUN_10008200 at 10008200
 * undefined4 __cdecl FUN_10008200(int param_1)
 * Address ranges: 10008200-1000824c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10008200(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  
  DAT_10031a8c = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10031a8c == (HANDLE)0x0) {
    uVar2 = 0;
  }
  else {
    bVar1 = FUN_100098d0();
    if (CONCAT31(extraout_var,bVar1) == 0) {
      HeapDestroy(DAT_10031a8c);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/*
 * FUN_10008250 at 10008250
 * undefined __stdcall FUN_10008250(void)
 * Address ranges: 10008250-100082eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10008250(void)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = DAT_10031a88;
  for (local_8 = 0; local_8 < DAT_10031a84; local_8 = local_8 + 1) {
    VirtualFree(*(LPVOID *)((int)local_c + 0xc),0x100000,0x4000);
    VirtualFree(*(LPVOID *)((int)local_c + 0xc),0,0x8000);
    HeapFree(DAT_10031a8c,0,*(LPVOID *)((int)local_c + 0x10));
    local_c = (LPVOID)((int)local_c + 0x14);
  }
  HeapFree(DAT_10031a8c,0,DAT_10031a88);
  HeapDestroy(DAT_10031a8c);
  return;
}


/*
 * FUN_100082f0 at 100082f0
 * undefined4 __stdcall FUN_100082f0(void)
 * Address ranges: 100082f0-100082fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_100082f0(void)

{
  return 1;
}


/*
 * __FF_MSGBANNER at 10008300
 * void __cdecl __FF_MSGBANNER(void)
 * Address ranges: 10008300-10008348
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __FF_MSGBANNER  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2003 Debug */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_10031424 == 1) || ((DAT_10031424 == 0 && (DAT_10031428 == 1)))) {
    FUN_10008350(0xfc);
    if (DAT_100315f8 != (code *)0x0) {
      (*DAT_100315f8)();
    }
    FUN_10008350(0xff);
  }
  return;
}


/*
 * FUN_10008350 at 10008350
 * undefined __cdecl FUN_10008350(int param_1)
 * Address ranges: 10008350-1000850e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10008350(int param_1)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  HANDLE hFile;
  DWORD DVar4;
  undefined *lpBuffer;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  uint local_1b4 [40];
  uint local_114 [65];
  uint *local_10;
  uint local_c;
  DWORD local_8;
  
  for (local_c = 0; (local_c < 0x12 && (param_1 != *(int *)(&DAT_1002ff68 + local_c * 8)));
      local_c = local_c + 1) {
  }
  if (param_1 == *(int *)(&DAT_1002ff68 + local_c * 8)) {
    if ((param_1 != 0xfc) &&
       (iVar2 = FUN_10003050(1,0,0,0,(&PTR_s_R6002___floating_point_not_loade_1002ff6c)[local_c * 2]
                            ), iVar2 == 1)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((DAT_10031424 == 1) || ((DAT_10031424 == 0 && (DAT_10031428 == 1)))) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = &local_8;
      sVar3 = _strlen((&PTR_s_R6002___floating_point_not_loade_1002ff6c)[local_c * 2]);
      lpBuffer = (&PTR_s_R6002___floating_point_not_loade_1002ff6c)[local_c * 2];
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar3,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar4 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_114,0x104);
      if (DVar4 == 0) {
        FUN_10001ec0(local_114,(uint *)"<program name unknown>");
      }
      local_10 = local_114;
      sVar3 = _strlen((char *)local_10);
      if (0x3c < sVar3 + 1) {
        sVar3 = _strlen((char *)local_114);
        local_10 = (uint *)((int)local_10 + (sVar3 - 0x3b));
        _strncpy((char *)local_10,"...",3);
      }
      FUN_10001ec0(local_1b4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10001ed0(local_1b4,local_10);
      FUN_10001ed0(local_1b4,(uint *)&DAT_1002c328);
      FUN_10001ed0(local_1b4,(uint *)(&PTR_s_R6002___floating_point_not_loade_1002ff6c)[local_c * 2]
                  );
      FUN_10009170(local_1b4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}


/*
 * __GET_RTERRMSG at 10008510
 * wchar_t * __cdecl __GET_RTERRMSG(int param_1)
 * Address ranges: 10008510-1000855f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __GET_RTERRMSG  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __GET_RTERRMSG
   
   Library: Visual Studio 2003 Debug */

wchar_t * __cdecl __GET_RTERRMSG(int param_1)

{
  wchar_t *pwVar1;
  uint local_8;
  
  for (local_8 = 0; (local_8 < 0x12 && (param_1 != *(int *)(&DAT_1002ff68 + local_8 * 8)));
      local_8 = local_8 + 1) {
  }
  if (param_1 == *(int *)(&DAT_1002ff68 + local_8 * 8)) {
    pwVar1 = (wchar_t *)(&PTR_s_R6002___floating_point_not_loade_1002ff6c)[local_8 * 2];
  }
  else {
    pwVar1 = (wchar_t *)0x0;
  }
  return pwVar1;
}


/*
 * FUN_10008560 at 10008560
 * int __stdcall FUN_10008560(void)
 * Address ranges: 10008560-10008639
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_10008560(void)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_100073f0(2);
  for (local_c = 3; local_c < DAT_10032f60; local_c = local_c + 1) {
    if (*(int *)(DAT_10031c18 + local_c * 4) != 0) {
      if ((*(uint *)(*(int *)(DAT_10031c18 + local_c * 4) + 0xc) & 0x83) != 0) {
        iVar1 = FUN_10001d70(*(undefined ***)(DAT_10031c18 + local_c * 4));
        if (iVar1 != -1) {
          local_8 = local_8 + 1;
        }
      }
      if (0x13 < local_c) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_10031c18 + local_c * 4) + 0x20));
        FUN_100041a0(*(void **)(DAT_10031c18 + local_c * 4),2);
        *(undefined4 *)(DAT_10031c18 + local_c * 4) = 0;
      }
    }
  }
  FUN_10007490(2);
  return local_8;
}


/*
 * __itoa at 10008640
 * char * __cdecl __itoa(int _Value, char * _Dest, int _Radix)
 * Address ranges: 10008640-10008681
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __itoa  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __itoa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __itoa(int _Value,char *_Dest,int _Radix)

{
  if ((_Radix == 10) && (_Value < 0)) {
    xtoa(_Value,_Dest,10,1);
  }
  else {
    xtoa(_Value,_Dest,_Radix,0);
  }
  return _Dest;
}


/*
 * xtoa at 10008690
 * undefined __cdecl xtoa(uint param_1, char * param_2, uint param_3, int param_4)
 * Address ranges: 10008690-10008751
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _xtoa  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    _xtoa
   
   Library: Visual Studio 2003 Debug */

void __cdecl xtoa(uint param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *local_c;
  char *local_8;
  
  local_8 = param_2;
  if (param_4 != 0) {
    *param_2 = '-';
    local_8 = param_2 + 1;
    param_1 = -param_1;
  }
  local_c = local_8;
  do {
    pcVar2 = local_8;
    uVar3 = param_1 % param_3;
    param_1 = param_1 / param_3;
    cVar1 = (char)uVar3;
    if (uVar3 < 10) {
      *local_8 = cVar1 + '0';
    }
    else {
      *local_8 = cVar1 + 'W';
    }
    local_8 = local_8 + 1;
  } while (param_1 != 0);
  *local_8 = '\0';
  local_8 = pcVar2;
  do {
    cVar1 = *local_8;
    *local_8 = *local_c;
    *local_c = cVar1;
    local_8 = local_8 + -1;
    local_c = local_c + 1;
  } while (local_c < local_8);
  return;
}


/*
 * __ltoa at 10008760
 * char * __cdecl __ltoa(long _Value, char * _Dest, int _Radix)
 * Address ranges: 10008760-1000879e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __ltoa  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __ltoa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __ltoa(long _Value,char *_Dest,int _Radix)

{
  undefined4 local_8;
  
  if ((_Radix == 10) && (_Value < 0)) {
    local_8 = 1;
  }
  else {
    local_8 = 0;
  }
  xtoa(_Value,_Dest,_Radix,local_8);
  return _Dest;
}


/*
 * __ultoa at 100087a0
 * char * __cdecl __ultoa(ulong _Value, char * _Dest, int _Radix)
 * Address ranges: 100087a0-100087bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __ultoa  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __ultoa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __ultoa(ulong _Value,char *_Dest,int _Radix)

{
  xtoa(_Value,_Dest,_Radix,0);
  return _Dest;
}


/*
 * __i64toa at 100087c0
 * char * __cdecl __i64toa(longlong _Val, char * _DstBuf, int _Radix)
 * Address ranges: 100087c0-10008807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __i64toa  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __i64toa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __i64toa(longlong _Val,char *_DstBuf,int _Radix)

{
  int local_8;
  
  if (((_Radix == 10) && (_Val < 0x100000000)) && (_Val < 0)) {
    local_8 = 1;
  }
  else {
    local_8 = 0;
  }
  x64toa(_Val,_DstBuf,_Radix,local_8);
  return _DstBuf;
}


/*
 * x64toa at 10008810
 * undefined __stdcall x64toa(undefined8 param_1, char * param_2, uint param_3, int param_4)
 * Address ranges: 10008810-10008901
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _x64toa@20  Library: Visual Studio 2003 Debug __stdcall x64toa,20
 */


/* Library Function - Single Match
    _x64toa@20
   
   Library: Visual Studio 2003 Debug
   __stdcall x64toa,20 */

void x64toa(undefined8 param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *local_c;
  char *local_8;
  
  local_8 = param_2;
  if (param_4 != 0) {
    *param_2 = '-';
    local_8 = param_2 + 1;
    param_1 = CONCAT44(-(param_1._4_4_ + ((uint)param_1 != 0)),-(uint)param_1);
  }
  local_c = local_8;
  do {
    pcVar2 = local_8;
    uVar4 = __aullrem((uint)param_1,param_1._4_4_,param_3,0);
    uVar5 = __aulldiv((uint)param_1,param_1._4_4_,param_3,0);
    if ((uint)uVar4 < 10) {
      *local_8 = (char)uVar4 + '0';
    }
    else {
      *local_8 = (char)uVar4 + 'W';
    }
    local_8 = local_8 + 1;
    param_1._4_4_ = (uint)((ulonglong)uVar5 >> 0x20);
    bVar3 = param_1._4_4_ != 0;
    param_1 = uVar5;
  } while ((bVar3) || (param_1._0_4_ = (uint)uVar5, bVar3 = (uint)param_1 != 0, bVar3));
  *local_8 = '\0';
  local_8 = pcVar2;
  do {
    cVar1 = *local_8;
    *local_8 = *local_c;
    *local_c = cVar1;
    local_8 = local_8 + -1;
    local_c = local_c + 1;
  } while (local_c < local_8);
  return;
}


/*
 * __ui64toa at 10008910
 * char * __cdecl __ui64toa(ulonglong _Val, char * _DstBuf, int _Radix)
 * Address ranges: 10008910-1000892e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __ui64toa  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __ui64toa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __ui64toa(ulonglong _Val,char *_DstBuf,int _Radix)

{
  x64toa(_Val,_DstBuf,_Radix,0);
  return _DstBuf;
}


/*
 * _strlen at 10008930
 * size_t __cdecl _strlen(char * _Str)
 * Address ranges: 10008930-100089aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _strlen  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _strlen
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_10008950;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10008983:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10008950:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_10008983;
}


/*
 * FUN_100089b0 at 100089b0
 * int __cdecl FUN_100089b0(undefined1 * param_1, int param_2, byte * param_3)
 * Address ranges: 100089b0-10008aa8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_100089b0(undefined1 *param_1,int param_2,byte *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002ce84,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_3 == (byte *)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002ce84,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = param_2;
  iVar2 = FUN_1000cf00((int *)&local_24,param_3,(undefined4 *)&stack0x00000010);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1000cc80(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}


/*
 * FUN_10008ab0 at 10008ab0
 * int __cdecl FUN_10008ab0(undefined1 * param_1, int param_2, byte * param_3, undefined4 * param_4)
 * Address ranges: 10008ab0-10008ba2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10008ab0(undefined1 *param_1,int param_2,byte *param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002cea0,0x5a,0,(byte *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_3 == (byte *)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002cea0,0x5b,0,(byte *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = param_2;
  iVar2 = FUN_1000cf00((int *)&local_24,param_3,param_4);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1000cc80(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}


/*
 * FUN_10008bb0 at 10008bb0
 * undefined __stdcall FUN_10008bb0(void)
 * Address ranges: 10008bb0-10008bde
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Unable to track spacebase fully for stack */

void FUN_10008bb0(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}


/*
 * FUN_10008be0 at 10008be0
 * int __cdecl FUN_10008be0(int param_1, int param_2)
 * Address ranges: 10008be0-10008dda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10008be0(int param_1,int param_2)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  undefined4 *puVar5;
  int local_10;
  uint local_c;
  
  if ((param_2 != 4) && (param_2 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      FUN_100073f0(1);
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_1003160c == 0)) {
        BVar2 = SetConsoleCtrlHandler(FUN_10008e10,1);
        if (BVar2 != 1) {
          DVar3 = GetLastError();
          pDVar4 = FUN_10006f30();
          *pDVar4 = DVar3;
          FUN_10007490(1);
          goto LAB_10008dc8;
        }
        DAT_1003160c = 1;
      }
      switch(param_1) {
      case 2:
        local_10 = DAT_100315fc;
        DAT_100315fc = param_2;
        break;
      case 0xf:
        local_10 = DAT_10031608;
        DAT_10031608 = param_2;
        break;
      case 0x15:
        local_10 = DAT_10031600;
        DAT_10031600 = param_2;
        break;
      case 0x16:
        local_10 = DAT_10031604;
        DAT_10031604 = param_2;
      }
      FUN_10007490(1);
      return local_10;
    }
    if (((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) {
      pDVar4 = FUN_100077b0();
      if ((undefined *)pDVar4[0x14] == &DAT_10030220) {
        DVar3 = FUN_10003710(DAT_100302a0,2,0x1002ceac,0x133);
        pDVar4[0x14] = DVar3;
        if (pDVar4[0x14] == 0) goto LAB_10008dc8;
        FUN_100061d0((undefined4 *)pDVar4[0x14],(undefined4 *)&DAT_10030220,(uint)DAT_100302a0);
      }
      local_c = FUN_100090f0(param_1,pDVar4[0x14]);
      if (local_c != 0) {
        iVar1 = *(int *)(local_c + 8);
        do {
          if (*(int *)(local_c + 4) != param_1) {
            return iVar1;
          }
          *(int *)(local_c + 8) = param_2;
          local_c = local_c + 0xc;
        } while (local_c < pDVar4[0x14] + DAT_100302a4 * 0xc);
        return iVar1;
      }
    }
  }
LAB_10008dc8:
  puVar5 = (undefined4 *)FUN_10006f20();
  *puVar5 = 0x16;
  return -1;
}


/*
 * FUN_10008e10 at 10008e10
 * undefined4 __stdcall FUN_10008e10(int param_1)
 * Address ranges: 10008e10-10008ea1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10008e10(int param_1)

{
  undefined4 uVar1;
  code *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  FUN_100073f0(1);
  if (param_1 == 0) {
    local_c = &DAT_100315fc;
    local_10 = DAT_100315fc;
    local_8 = 2;
  }
  else {
    local_c = &DAT_10031600;
    local_10 = DAT_10031600;
    local_8 = 0x15;
  }
  if (local_10 == (code *)0x0) {
    FUN_10007490(1);
    uVar1 = 0;
  }
  else {
    if (local_10 == (code *)0x1) {
      FUN_10007490(1);
    }
    else {
      *local_c = 0;
      FUN_10007490(1);
      (*local_10)(local_8);
    }
    uVar1 = 1;
  }
  return uVar1;
}


/*
 * FUN_10008eb0 at 10008eb0
 * undefined4 __cdecl FUN_10008eb0(int param_1)
 * Address ranges: 10008eb0-100090b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10008eb0(int param_1)

{
  bool bVar1;
  uint uVar2;
  code *local_20;
  undefined4 *local_1c;
  DWORD local_18;
  int local_14;
  DWORD local_c;
  DWORD *local_8;
  
  bVar1 = false;
  switch(param_1) {
  case 2:
    local_1c = &DAT_100315fc;
    local_20 = DAT_100315fc;
    bVar1 = true;
    break;
  default:
    return 0xffffffff;
  case 4:
  case 8:
  case 0xb:
    local_8 = FUN_100077b0();
    uVar2 = FUN_100090f0(param_1,local_8[0x14]);
    local_1c = (undefined4 *)(uVar2 + 8);
    local_20 = (code *)*local_1c;
    break;
  case 0xf:
    local_1c = &DAT_10031608;
    local_20 = DAT_10031608;
    bVar1 = true;
    break;
  case 0x15:
    local_1c = &DAT_10031600;
    local_20 = DAT_10031600;
    bVar1 = true;
    break;
  case 0x16:
    local_1c = &DAT_10031604;
    local_20 = DAT_10031604;
    bVar1 = true;
  }
  if (bVar1) {
    FUN_100073f0(1);
  }
  if (local_20 != (code *)0x1) {
    if (local_20 == (code *)0x0) {
      if (bVar1) {
        FUN_10007490(1);
      }
                    /* WARNING: Subroutine does not return */
      __exit(3);
    }
    if (((param_1 == 8) || (param_1 == 0xb)) || (param_1 == 4)) {
      local_18 = local_8[0x15];
      local_8[0x15] = 0;
      if (param_1 == 8) {
        local_c = local_8[0x16];
        local_8[0x16] = 0x8c;
      }
    }
    if (param_1 == 8) {
      for (local_14 = DAT_10030298; local_14 < DAT_10030298 + _DAT_1003029c; local_14 = local_14 + 1
          ) {
        *(undefined4 *)(local_8[0x14] + 8 + local_14 * 0xc) = 0;
      }
    }
    else {
      *local_1c = 0;
    }
    if (bVar1) {
      FUN_10007490(1);
    }
    if (param_1 == 8) {
      (*local_20)(8,local_8[0x16]);
    }
    else {
      (*local_20)(param_1);
      if ((param_1 != 0xb) && (param_1 != 4)) {
        return 0;
      }
    }
    local_8[0x15] = local_18;
    if (param_1 == 8) {
      local_8[0x16] = local_c;
    }
    return 0;
  }
  if (bVar1) {
    FUN_10007490(1);
  }
  return 0;
}


/*
 * FUN_100090f0 at 100090f0
 * uint __cdecl FUN_100090f0(int param_1, uint param_2)
 * Address ranges: 100090f0-1000914a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_100090f0(int param_1,uint param_2)

{
  uint local_8;
  
  local_8 = param_2;
  do {
    if (*(int *)(local_8 + 4) == param_1) break;
    local_8 = local_8 + 0xc;
  } while (local_8 < param_2 + DAT_100302a4 * 0xc);
  if ((param_2 + DAT_100302a4 * 0xc <= local_8) || (*(int *)(local_8 + 4) != param_1)) {
    local_8 = 0;
  }
  return local_8;
}


/*
 * FUN_10009150 at 10009150
 * DWORD * __stdcall FUN_10009150(void)
 * Address ranges: 10009150-1000915c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


DWORD * FUN_10009150(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100077b0();
  return pDVar1 + 0x16;
}


/*
 * FUN_10009160 at 10009160
 * DWORD * __stdcall FUN_10009160(void)
 * Address ranges: 10009160-1000916c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


DWORD * FUN_10009160(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100077b0();
  return pDVar1 + 0x15;
}


/*
 * FUN_10009170 at 10009170
 * int __cdecl FUN_10009170(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10009170-1000922a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10009170(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if (DAT_10031610 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10031610 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10031610 != (FARPROC)0x0) {
        DAT_10031614 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10031618 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_100091e3;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_100091e3:
    if (DAT_10031614 != (FARPROC)0x0) {
      local_8 = (*DAT_10031614)();
    }
    if ((local_8 != 0) && (DAT_10031618 != (FARPROC)0x0)) {
      local_8 = (*DAT_10031618)(local_8);
    }
    iVar1 = (*DAT_10031610)(local_8,param_1,param_2,param_3);
  }
  return iVar1;
}


/*
 * _strncpy at 10009230
 * char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count)
 * Address ranges: 10009230-1000932d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _strncpy  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x1000926e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_100092ab;
        goto LAB_10009319;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x10009315:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10009319:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_100092ab;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10009315;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10009315;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10009315;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000926e:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_100092ab:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}


/*
 * _set_new_handler at 10009330
 * _func_int_uint * __cdecl _set_new_handler(_func_int_uint * param_1)
 * Address ranges: 10009330-1000935f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  int (__cdecl*__cdecl _set_new_handler(int (__cdecl*)(unsigned int)))(unsigned int)  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    int (__cdecl*__cdecl _set_new_handler(int (__cdecl*)(unsigned int)))(unsigned int)
   
   Library: Visual Studio 2003 Debug */

_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1)

{
  _func_int_uint *p_Var1;
  
  FUN_100073f0(9);
  p_Var1 = DAT_10031620;
  DAT_10031620 = param_1;
  FUN_10007490(9);
  return p_Var1;
}


/*
 * FUN_10009360 at 10009360
 * undefined4 __stdcall FUN_10009360(void)
 * Address ranges: 10009360-10009369
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10009360(void)

{
  return DAT_10031620;
}


/*
 * __callnewh at 10009370
 * int __cdecl __callnewh(size_t _Size)
 * Address ranges: 10009370-1000939c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __callnewh  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2003 Debug */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  if ((DAT_10031620 != (code *)0x0) && (iVar1 = (*DAT_10031620)(_Size), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/*
 * _memset at 100093a0
 * void * __cdecl _memset(void * _Dst, int _Val, size_t _Size)
 * Address ranges: 100093a0-100093f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _memset  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined1 *)puVar4 = (undefined1)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}


/*
 * FUN_10009400 at 10009400
 * undefined __cdecl FUN_10009400(void * param_1)
 * Address ranges: 10009400-10009416
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10009400(void *param_1)

{
  __nh_malloc_base(param_1,(uint)param_1,DAT_1003161c);
  return;
}


/*
 * __nh_malloc_base at 10009420
 * int * __thiscall __nh_malloc_base(void * this, uint param_1, int param_2)
 * Address ranges: 10009420-10009476
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __nh_malloc_base  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __nh_malloc_base
   
   Library: Visual Studio 2003 Debug */

int * __thiscall __nh_malloc_base(void *this,uint param_1,int param_2)

{
  int iVar1;
  void *extraout_ECX;
  int *local_8;
  
  if (param_1 < 0xffffffe1) {
    do {
      if (param_1 < 0xffffffe1) {
        local_8 = FUN_10009480(this,param_1);
      }
      else {
        local_8 = (int *)0x0;
      }
      if (local_8 != (int *)0x0) {
        return local_8;
      }
      if (param_2 == 0) {
        return (int *)0x0;
      }
      iVar1 = __callnewh(param_1);
      this = extraout_ECX;
    } while (iVar1 != 0);
  }
  return (int *)0x0;
}


/*
 * FUN_10009480 at 10009480
 * int * __thiscall FUN_10009480(void * this, uint param_1)
 * Address ranges: 10009480-100094ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * __thiscall FUN_10009480(void *this,uint param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_10030004) {
    FUN_100073f0(9);
    piVar1 = FUN_10009fc0(param_1);
    FUN_10007490(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  piVar1 = HeapAlloc(DAT_10031a8c,0,param_1 + 0xf & 0xfffffff0);
  return piVar1;
}


/*
 * FUN_100094f0 at 100094f0
 * undefined4 __stdcall FUN_100094f0(void)
 * Address ranges: 100094f0-100094f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_100094f0(void)

{
  return 1;
}


/*
 * FUN_10009500 at 10009500
 * LPVOID __cdecl FUN_10009500(LPVOID param_1, uint param_2)
 * Address ranges: 10009500-100095ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


LPVOID __cdecl FUN_10009500(LPVOID param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_2 < 0xffffffe1) {
    FUN_100073f0(9);
    puVar1 = (uint *)FUN_10009930((int)param_1);
    if (puVar1 == (uint *)0x0) {
      FUN_10007490(9);
      if (param_2 == 0) {
        param_2 = 1;
      }
      local_8 = HeapReAlloc(DAT_10031a8c,0x10,param_1,param_2 + 0xf & 0xfffffff0);
    }
    else {
      local_8 = (LPVOID)0x0;
      if (param_2 <= DAT_10030004) {
        iVar2 = FUN_1000a800(puVar1,(int)param_1,param_2);
        if (iVar2 != 0) {
          local_8 = param_1;
        }
      }
      FUN_10007490(9);
    }
  }
  else {
    local_8 = (LPVOID)0x0;
  }
  return local_8;
}


/*
 * FUN_100095b0 at 100095b0
 * int * __cdecl FUN_100095b0(int * param_1, void * param_2)
 * Address ranges: 100095b0-10009799
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * __cdecl FUN_100095b0(int *param_1,void *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  void *local_18;
  void *local_14;
  int *local_c;
  
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)FUN_10009400(param_2);
  }
  else if (param_2 == (void *)0x0) {
    FUN_100097a0(param_1,param_1);
    piVar1 = (int *)0x0;
  }
  else {
    do {
      local_c = (int *)0x0;
      if (param_2 < (void *)0xffffffe1) {
        FUN_100073f0(9);
        puVar2 = (uint *)FUN_10009930((int)param_1);
        if (puVar2 == (uint *)0x0) {
          FUN_10007490(9);
          if (param_2 == (void *)0x0) {
            param_2 = (void *)0x1;
          }
          param_2 = (void *)((int)param_2 + 0xfU & 0xfffffff0);
          local_c = HeapReAlloc(DAT_10031a8c,0,param_1,(SIZE_T)param_2);
        }
        else {
          if (param_2 <= DAT_10030004) {
            iVar3 = FUN_1000a800(puVar2,(int)param_1,(int)param_2);
            if (iVar3 == 0) {
              local_c = FUN_10009fc0((int)param_2);
              if (local_c != (int *)0x0) {
                local_14 = (void *)(param_1[-1] - 1);
                if (param_2 <= local_14) {
                  local_14 = param_2;
                }
                FUN_100061d0(local_c,param_1,(uint)local_14);
                FUN_100099f0(puVar2,(int)param_1);
              }
            }
            else {
              local_c = param_1;
            }
          }
          if (local_c == (int *)0x0) {
            if (param_2 == (void *)0x0) {
              param_2 = (void *)0x1;
            }
            param_2 = (void *)((int)param_2 + 0xfU & 0xfffffff0);
            local_c = HeapAlloc(DAT_10031a8c,0,(SIZE_T)param_2);
            if (local_c != (int *)0x0) {
              local_18 = param_2;
              if ((void *)(param_1[-1] - 1U) < param_2) {
                local_18 = (void *)(param_1[-1] - 1U);
              }
              FUN_100061d0(local_c,param_1,(uint)local_18);
              FUN_100099f0(puVar2,(int)param_1);
            }
          }
          FUN_10007490(9);
        }
      }
      if (local_c != (int *)0x0) {
        return local_c;
      }
      if (DAT_1003161c == 0) {
        return (int *)0x0;
      }
      iVar3 = __callnewh((size_t)param_2);
    } while (iVar3 != 0);
    piVar1 = (int *)0x0;
  }
  return piVar1;
}


/*
 * FUN_100097a0 at 100097a0
 * undefined __thiscall FUN_100097a0(void * this, LPVOID param_1)
 * Address ranges: 100097a0-10009807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __thiscall FUN_100097a0(void *this,LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_100073f0(9);
    puVar1 = (uint *)FUN_10009930((int)param_1);
    if (puVar1 == (uint *)0x0) {
      FUN_10007490(9);
      HeapFree(DAT_10031a8c,0,param_1);
    }
    else {
      FUN_100099f0(puVar1,(int)param_1);
      FUN_10007490(9);
    }
  }
  return;
}


/*
 * FUN_10009810 at 10009810
 * undefined4 __stdcall FUN_10009810(void)
 * Address ranges: 10009810-10009883
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10009810(void)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  undefined4 *puVar5;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  FUN_100073f0(9);
  iVar1 = FUN_1000af20();
  if (iVar1 < 0) {
    local_8 = 0xfffffffc;
  }
  FUN_10007490(9);
  BVar2 = HeapValidate(DAT_10031a8c,0,(LPCVOID)0x0);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      pDVar4 = FUN_10006f30();
      *pDVar4 = 0x78;
      puVar5 = (undefined4 *)FUN_10006f20();
      *puVar5 = 0x28;
    }
    else {
      local_8 = 0xfffffffc;
    }
  }
  return local_8;
}


/*
 * FUN_10009890 at 10009890
 * undefined __stdcall FUN_10009890(void)
 * Address ranges: 10009890-10009899
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10009890(void)

{
  FUN_10009810();
  return;
}


/*
 * FUN_100098a0 at 100098a0
 * undefined4 __stdcall FUN_100098a0(void)
 * Address ranges: 100098a0-100098a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_100098a0(void)

{
  return DAT_10030004;
}


/*
 * FUN_100098b0 at 100098b0
 * bool __cdecl FUN_100098b0(uint param_1)
 * Address ranges: 100098b0-100098ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool __cdecl FUN_100098b0(uint param_1)

{
  if (param_1 < 0x3f9) {
    DAT_10030004 = param_1;
  }
  return param_1 < 0x3f9;
}


/*
 * FUN_100098d0 at 100098d0
 * bool __stdcall FUN_100098d0(void)
 * Address ranges: 100098d0-10009928
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool FUN_100098d0(void)

{
  DAT_10031a88 = HeapAlloc(DAT_10031a8c,0,0x140);
  if (DAT_10031a88 != (LPVOID)0x0) {
    DAT_10031a80 = 0;
    DAT_10031a84 = 0;
    DAT_10031a68 = 0x10;
    DAT_10031a7c = DAT_10031a88;
  }
  return DAT_10031a88 != (LPVOID)0x0;
}


/*
 * FUN_10009930 at 10009930
 * uint __cdecl FUN_10009930(int param_1)
 * Address ranges: 10009930-10009984
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_10009930(int param_1)

{
  uint local_c;
  
  local_c = DAT_10031a88;
  while( true ) {
    if (DAT_10031a88 + DAT_10031a84 * 0x14 <= local_c) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(local_c + 0xc)) < 0x100000) break;
    local_c = local_c + 0x14;
  }
  return local_c;
}


/*
 * FUN_10009990 at 10009990
 * undefined4 __cdecl FUN_10009990(int param_1, int param_2)
 * Address ranges: 10009990-100099ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10009990(int param_1,int param_2)

{
  uint uVar1;
  undefined4 local_10;
  
  uVar1 = param_2 - *(int *)(param_1 + 0xc);
  if ((((*(uint *)(param_1 + 8) & 0x80000000U >> ((byte)(uVar1 >> 0xf) & 0x1f)) == 0) &&
      ((uVar1 & 0xf) == 0)) && ((uVar1 & 0xfff) != 0)) {
    local_10 = 1;
  }
  else {
    local_10 = 0;
  }
  return local_10;
}


/*
 * FUN_100099f0 at 100099f0
 * undefined __cdecl FUN_100099f0(uint * param_1, int param_2)
 * Address ranges: 100099f0-10009fbc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100099f0(uint *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint *puVar9;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int *local_20;
  
  uVar4 = param_1[4];
  uVar8 = param_2 - param_1[3] >> 0xf;
  piVar2 = (int *)(uVar4 + 0x144 + uVar8 * 0x204);
  local_20 = (int *)(param_2 + -4);
  local_34 = *local_20 + -1;
  puVar9 = (uint *)((int)local_20 + local_34);
  uVar5 = *puVar9;
  uVar6 = *(uint *)(param_2 + -8);
  if ((uVar5 & 1) == 0) {
    local_28 = ((int)uVar5 >> 4) - 1;
    if (0x3f < local_28) {
      local_28 = 0x3f;
    }
    if (puVar9[1] == puVar9[2]) {
      bVar7 = (byte)local_28;
      if (local_28 < 0x20) {
        *(uint *)(uVar4 + 0x44 + uVar8 * 4) =
             *(uint *)(uVar4 + 0x44 + uVar8 * 4) & ~(0x80000000U >> (bVar7 & 0x1f));
        *(char *)(uVar4 + local_28 + 4) = *(char *)(uVar4 + local_28 + 4) + -1;
        if (*(char *)(uVar4 + local_28 + 4) == '\0') {
          *param_1 = *param_1 & ~(0x80000000U >> (bVar7 & 0x1f));
        }
      }
      else {
        *(uint *)(uVar4 + 0xc4 + uVar8 * 4) =
             *(uint *)(uVar4 + 0xc4 + uVar8 * 4) & ~(0x80000000U >> (bVar7 - 0x20 & 0x1f));
        *(char *)(uVar4 + local_28 + 4) = *(char *)(uVar4 + local_28 + 4) + -1;
        if (*(char *)(uVar4 + local_28 + 4) == '\0') {
          param_1[1] = param_1[1] & ~(0x80000000U >> (bVar7 - 0x20 & 0x1f));
        }
      }
    }
    *(uint *)(puVar9[2] + 4) = puVar9[1];
    *(uint *)(puVar9[1] + 8) = puVar9[2];
    local_34 = local_34 + uVar5;
  }
  local_2c = (local_34 >> 4) - 1;
  if (0x3f < local_2c) {
    local_2c = 0x3f;
  }
  if ((uVar6 & 1) == 0) {
    local_20 = (int *)((int)local_20 - uVar6);
    local_30 = ((int)uVar6 >> 4) - 1;
    if (0x3f < local_30) {
      local_30 = 0x3f;
    }
    local_34 = local_34 + uVar6;
    local_2c = (local_34 >> 4) - 1;
    if (0x3f < local_2c) {
      local_2c = 0x3f;
    }
    if (local_30 != local_2c) {
      if (local_20[1] == local_20[2]) {
        bVar7 = (byte)local_30;
        if (local_30 < 0x20) {
          *(uint *)(uVar4 + 0x44 + uVar8 * 4) =
               *(uint *)(uVar4 + 0x44 + uVar8 * 4) & ~(0x80000000U >> (bVar7 & 0x1f));
          *(char *)(uVar4 + local_30 + 4) = *(char *)(uVar4 + local_30 + 4) + -1;
          if (*(char *)(uVar4 + local_30 + 4) == '\0') {
            *param_1 = *param_1 & ~(0x80000000U >> (bVar7 & 0x1f));
          }
        }
        else {
          *(uint *)(uVar4 + 0xc4 + uVar8 * 4) =
               *(uint *)(uVar4 + 0xc4 + uVar8 * 4) & ~(0x80000000U >> (bVar7 - 0x20 & 0x1f));
          *(char *)(uVar4 + local_30 + 4) = *(char *)(uVar4 + local_30 + 4) + -1;
          if (*(char *)(uVar4 + local_30 + 4) == '\0') {
            param_1[1] = param_1[1] & ~(0x80000000U >> (bVar7 - 0x20 & 0x1f));
          }
        }
      }
      *(int *)(local_20[2] + 4) = local_20[1];
      *(int *)(local_20[1] + 8) = local_20[2];
    }
  }
  if (((uVar6 & 1) != 0) || (local_30 != local_2c)) {
    piVar1 = piVar2 + local_2c * 2;
    local_20[1] = piVar1[1];
    local_20[2] = (int)piVar1;
    piVar1[1] = (int)local_20;
    *(int **)(local_20[1] + 8) = local_20;
    if (local_20[1] == local_20[2]) {
      bVar7 = (byte)local_2c;
      if (local_2c < 0x20) {
        cVar3 = *(char *)(uVar4 + local_2c + 4);
        *(char *)(uVar4 + local_2c + 4) = *(char *)(uVar4 + local_2c + 4) + '\x01';
        if (cVar3 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar7 & 0x1f);
        }
        *(uint *)(uVar4 + 0x44 + uVar8 * 4) =
             *(uint *)(uVar4 + 0x44 + uVar8 * 4) | 0x80000000U >> (bVar7 & 0x1f);
      }
      else {
        cVar3 = *(char *)(uVar4 + local_2c + 4);
        *(char *)(uVar4 + local_2c + 4) = *(char *)(uVar4 + local_2c + 4) + '\x01';
        if (cVar3 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar7 - 0x20 & 0x1f);
        }
        *(uint *)(uVar4 + 0xc4 + uVar8 * 4) =
             *(uint *)(uVar4 + 0xc4 + uVar8 * 4) | 0x80000000U >> (bVar7 - 0x20 & 0x1f);
      }
    }
  }
  *local_20 = local_34;
  *(int *)((int)local_20 + local_34 + -4) = local_34;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    if (DAT_10031a80 != (uint *)0x0) {
      VirtualFree((LPVOID)(DAT_10031a80[3] + DAT_10031a78 * 0x8000),0x8000,0x4000);
      DAT_10031a80[2] = DAT_10031a80[2] | 0x80000000U >> ((byte)DAT_10031a78 & 0x1f);
      *(undefined4 *)(DAT_10031a80[4] + 0xc4 + DAT_10031a78 * 4) = 0;
      *(char *)(DAT_10031a80[4] + 0x43) = *(char *)(DAT_10031a80[4] + 0x43) + -1;
      if (*(char *)(DAT_10031a80[4] + 0x43) == '\0') {
        DAT_10031a80[1] = DAT_10031a80[1] & 0xfffffffe;
      }
      if (DAT_10031a80[2] == 0xffffffff) {
        VirtualFree((LPVOID)DAT_10031a80[3],0,0x8000);
        HeapFree(DAT_10031a8c,0,(LPVOID)DAT_10031a80[4]);
        FUN_1000dda0(DAT_10031a80,DAT_10031a80 + 5,
                     (DAT_10031a88 + DAT_10031a84 * 0x14) - (int)(DAT_10031a80 + 5));
        DAT_10031a84 = DAT_10031a84 + -1;
        if (DAT_10031a80 < param_1) {
          param_1 = param_1 + -5;
        }
        DAT_10031a7c = DAT_10031a88;
      }
    }
    DAT_10031a80 = param_1;
    DAT_10031a78 = uVar8;
  }
  return;
}


/*
 * FUN_10009fc0 at 10009fc0
 * int * __cdecl FUN_10009fc0(int param_1)
 * Address ranges: 10009fc0-1000a4f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * __cdecl FUN_10009fc0(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  byte bVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  uint local_38;
  int local_34;
  uint local_28;
  int local_24;
  uint local_20;
  uint *local_1c;
  int local_18;
  
  puVar7 = DAT_10031a88 + DAT_10031a84 * 5;
  uVar9 = param_1 + 0x17U & 0xfffffff0;
  iVar5 = ((int)(param_1 + 0x17U) >> 4) + -1;
  bVar6 = (byte)iVar5;
  if (iVar5 < 0x20) {
    local_28 = 0xffffffff >> (bVar6 & 0x1f);
    local_38 = 0xffffffff;
  }
  else {
    local_28 = 0;
    local_38 = 0xffffffff >> (bVar6 - 0x20 & 0x1f);
  }
  for (local_1c = DAT_10031a7c;
      (local_1c < puVar7 && ((local_28 & *local_1c) == 0 && (local_38 & local_1c[1]) == 0));
      local_1c = local_1c + 5) {
  }
  if (local_1c == puVar7) {
    for (local_1c = DAT_10031a88;
        (local_1c < DAT_10031a7c && ((local_28 & *local_1c) == 0 && (local_38 & local_1c[1]) == 0));
        local_1c = local_1c + 5) {
    }
    if (local_1c == DAT_10031a7c) {
      for (; (local_1c < puVar7 && (local_1c[2] == 0)); local_1c = local_1c + 5) {
      }
      if (local_1c == puVar7) {
        for (local_1c = DAT_10031a88; (local_1c < DAT_10031a7c && (local_1c[2] == 0));
            local_1c = local_1c + 5) {
        }
        if ((local_1c == DAT_10031a7c) && (local_1c = FUN_1000a500(), local_1c == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar5 = FUN_1000a610((int)local_1c);
      *(int *)local_1c[4] = iVar5;
      if (*(int *)local_1c[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  DAT_10031a7c = local_1c;
  piVar4 = (int *)local_1c[4];
  local_34 = *piVar4;
  if ((local_34 == -1) ||
     ((local_28 & piVar4[local_34 + 0x11]) == 0 && (local_38 & piVar4[local_34 + 0x31]) == 0)) {
    local_34 = 0;
    while ((local_28 & piVar4[local_34 + 0x11]) == 0 && (local_38 & piVar4[local_34 + 0x31]) == 0) {
      local_34 = local_34 + 1;
    }
  }
  piVar2 = piVar4 + local_34 * 0x81 + 0x51;
  local_24 = 0;
  local_20 = local_28 & piVar4[local_34 + 0x11];
  if (local_20 == 0) {
    local_24 = 0x20;
    local_20 = local_38 & piVar4[local_34 + 0x31];
  }
  for (; -1 < (int)local_20; local_20 = local_20 << 1) {
    local_24 = local_24 + 1;
  }
  piVar8 = (int *)piVar2[local_24 * 2 + 1];
  iVar5 = *piVar8 - uVar9;
  local_18 = (iVar5 >> 4) + -1;
  if (0x3f < local_18) {
    local_18 = 0x3f;
  }
  if (local_18 != local_24) {
    if (piVar8[1] == piVar8[2]) {
      bVar6 = (byte)local_24;
      if (local_24 < 0x20) {
        piVar4[local_34 + 0x11] = piVar4[local_34 + 0x11] & ~(0x80000000U >> (bVar6 & 0x1f));
        *(char *)((int)piVar4 + local_24 + 4) = *(char *)((int)piVar4 + local_24 + 4) + -1;
        if (*(char *)((int)piVar4 + local_24 + 4) == '\0') {
          *local_1c = *local_1c & ~(0x80000000U >> (bVar6 & 0x1f));
        }
      }
      else {
        piVar4[local_34 + 0x31] = piVar4[local_34 + 0x31] & ~(0x80000000U >> (bVar6 - 0x20 & 0x1f));
        *(char *)((int)piVar4 + local_24 + 4) = *(char *)((int)piVar4 + local_24 + 4) + -1;
        if (*(char *)((int)piVar4 + local_24 + 4) == '\0') {
          local_1c[1] = local_1c[1] & ~(0x80000000U >> (bVar6 - 0x20 & 0x1f));
        }
      }
    }
    *(int *)(piVar8[2] + 4) = piVar8[1];
    *(int *)(piVar8[1] + 8) = piVar8[2];
    if (iVar5 != 0) {
      piVar1 = piVar2 + local_18 * 2;
      piVar8[1] = piVar1[1];
      piVar8[2] = (int)piVar1;
      piVar1[1] = (int)piVar8;
      *(int **)(piVar8[1] + 8) = piVar8;
      if (piVar8[1] == piVar8[2]) {
        bVar6 = (byte)local_18;
        if (local_18 < 0x20) {
          cVar3 = *(char *)((int)piVar4 + local_18 + 4);
          *(char *)((int)piVar4 + local_18 + 4) = *(char *)((int)piVar4 + local_18 + 4) + '\x01';
          if (cVar3 == '\0') {
            *local_1c = *local_1c | 0x80000000U >> (bVar6 & 0x1f);
          }
          piVar4[local_34 + 0x11] = piVar4[local_34 + 0x11] | 0x80000000U >> (bVar6 & 0x1f);
        }
        else {
          cVar3 = *(char *)((int)piVar4 + local_18 + 4);
          *(char *)((int)piVar4 + local_18 + 4) = *(char *)((int)piVar4 + local_18 + 4) + '\x01';
          if (cVar3 == '\0') {
            local_1c[1] = local_1c[1] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
          }
          piVar4[local_34 + 0x31] = piVar4[local_34 + 0x31] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
        }
      }
    }
  }
  if (iVar5 != 0) {
    *piVar8 = iVar5;
    *(int *)((int)piVar8 + iVar5 + -4) = iVar5;
  }
  piVar8 = (int *)((int)piVar8 + iVar5);
  *piVar8 = uVar9 + 1;
  *(uint *)((int)piVar8 + (uVar9 - 4)) = uVar9 + 1;
  iVar5 = *piVar2;
  *piVar2 = *piVar2 + 1;
  if (((iVar5 == 0) && (local_1c == DAT_10031a80)) && (local_34 == DAT_10031a78)) {
    DAT_10031a80 = (uint *)0x0;
  }
  *piVar4 = local_34;
  return piVar8 + 1;
}


/*
 * FUN_1000a500 at 1000a500
 * undefined4 * __stdcall FUN_1000a500(void)
 * Address ranges: 1000a500-1000a60e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * FUN_1000a500(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_10031a84 == DAT_10031a68) {
    pvVar1 = HeapReAlloc(DAT_10031a8c,0,DAT_10031a88,(DAT_10031a68 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10031a68 = DAT_10031a68 + 0x10;
    DAT_10031a88 = pvVar1;
  }
  puVar2 = (undefined4 *)((int)DAT_10031a88 + DAT_10031a84 * 0x14);
  pvVar1 = HeapAlloc(DAT_10031a8c,8,0x41c4);
  puVar2[4] = pvVar1;
  if (puVar2[4] == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (puVar2[3] == 0) {
      HeapFree(DAT_10031a8c,0,(LPVOID)puVar2[4]);
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0xffffffff;
      DAT_10031a84 = DAT_10031a84 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
    }
  }
  return puVar2;
}


/*
 * FUN_1000a610 at 1000a610
 * int __cdecl FUN_1000a610(int param_1)
 * Address ranges: 1000a610-1000a7fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_1000a610(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  LPVOID pvVar5;
  LPVOID lpAddress;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar4 = *(int *)(param_1 + 0x10);
  local_c = *(int *)(param_1 + 8);
  local_2c = 0;
  for (; -1 < local_c; local_c = local_c << 1) {
    local_2c = local_2c + 1;
  }
  iVar2 = iVar4 + 0x144 + local_2c * 0x204;
  for (local_24 = 0; local_24 < 0x3f; local_24 = local_24 + 1) {
    iVar1 = iVar2 + local_24 * 8;
    *(int *)(iVar1 + 8) = iVar1;
    *(int *)(iVar1 + 4) = iVar1;
  }
  lpAddress = (LPVOID)(*(int *)(param_1 + 0xc) + local_2c * 0x8000);
  pvVar5 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar5 == (LPVOID)0x0) {
    local_2c = -1;
  }
  else {
    for (local_8 = lpAddress; local_8 <= (LPVOID)((int)lpAddress + 0x7000U);
        local_8 = (LPVOID)((int)local_8 + 0x1000)) {
      *(undefined4 *)((int)local_8 + 8) = 0xffffffff;
      *(undefined4 *)((int)local_8 + 0xffc) = 0xffffffff;
      *(undefined4 *)((int)local_8 + 0xc) = 0xff0;
      *(int *)((int)local_8 + 0x10) = (int)local_8 + 0x100c;
      *(int *)((int)local_8 + 0x14) = (int)local_8 + -0xff4;
      *(undefined4 *)((int)local_8 + 0xff8) = 0xff0;
    }
    *(int *)(iVar2 + 0x1fc) = (int)lpAddress + 0xc;
    *(int *)(*(int *)(iVar2 + 0x1fc) + 8) = iVar2 + 0x1f8;
    *(int *)(iVar2 + 0x200) = (int)lpAddress + 0x700c;
    *(int *)(*(int *)(iVar2 + 0x200) + 4) = iVar2 + 0x1f8;
    *(undefined4 *)(iVar4 + 0x44 + local_2c * 4) = 0;
    *(undefined4 *)(iVar4 + 0xc4 + local_2c * 4) = 1;
    cVar3 = *(char *)(iVar4 + 0x43);
    *(char *)(iVar4 + 0x43) = *(char *)(iVar4 + 0x43) + '\x01';
    if (cVar3 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)local_2c & 0x1f));
  }
  return local_2c;
}


/*
 * FUN_1000a800 at 1000a800
 * undefined4 __cdecl FUN_1000a800(uint * param_1, int param_2, int param_3)
 * Address ranges: 1000a800-1000adea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_1000a800(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  byte bVar9;
  int *piVar10;
  uint uVar11;
  int local_2c;
  uint local_28;
  uint local_24;
  
  uVar5 = param_3 + 0x17U & 0xfffffff0;
  uVar3 = param_1[4];
  uVar11 = param_2 - param_1[3] >> 0xf;
  iVar1 = uVar3 + 0x144 + uVar11 * 0x204;
  piVar6 = (int *)(param_2 + -4);
  local_2c = *piVar6 + -1;
  puVar7 = (uint *)((int)piVar6 + local_2c);
  uVar4 = *puVar7;
  if (local_2c < (int)uVar5) {
    if (((uVar4 & 1) != 0) || ((int)(local_2c + uVar4) < (int)uVar5)) {
      return 0;
    }
    local_24 = ((int)uVar4 >> 4) - 1;
    if (0x3f < local_24) {
      local_24 = 0x3f;
    }
    if (puVar7[1] == puVar7[2]) {
      bVar9 = (byte)local_24;
      if (local_24 < 0x20) {
        *(uint *)(uVar3 + 0x44 + uVar11 * 4) =
             *(uint *)(uVar3 + 0x44 + uVar11 * 4) & ~(0x80000000U >> (bVar9 & 0x1f));
        *(char *)(uVar3 + local_24 + 4) = *(char *)(uVar3 + local_24 + 4) + -1;
        if (*(char *)(uVar3 + local_24 + 4) == '\0') {
          *param_1 = *param_1 & ~(0x80000000U >> (bVar9 & 0x1f));
        }
      }
      else {
        *(uint *)(uVar3 + 0xc4 + uVar11 * 4) =
             *(uint *)(uVar3 + 0xc4 + uVar11 * 4) & ~(0x80000000U >> (bVar9 - 0x20 & 0x1f));
        *(char *)(uVar3 + local_24 + 4) = *(char *)(uVar3 + local_24 + 4) + -1;
        if (*(char *)(uVar3 + local_24 + 4) == '\0') {
          param_1[1] = param_1[1] & ~(0x80000000U >> (bVar9 - 0x20 & 0x1f));
        }
      }
    }
    *(uint *)(puVar7[2] + 4) = puVar7[1];
    *(uint *)(puVar7[1] + 8) = puVar7[2];
    iVar8 = (local_2c + uVar4) - uVar5;
    if (0 < iVar8) {
      piVar10 = (int *)((int)piVar6 + uVar5);
      local_24 = (iVar8 >> 4) - 1;
      if (0x3f < local_24) {
        local_24 = 0x3f;
      }
      iVar1 = iVar1 + local_24 * 8;
      piVar10[1] = *(int *)(iVar1 + 4);
      piVar10[2] = iVar1;
      *(int **)(iVar1 + 4) = piVar10;
      *(int **)(piVar10[1] + 8) = piVar10;
      if (piVar10[1] == piVar10[2]) {
        bVar9 = (byte)local_24;
        if (local_24 < 0x20) {
          cVar2 = *(char *)(uVar3 + local_24 + 4);
          *(char *)(uVar3 + local_24 + 4) = *(char *)(uVar3 + local_24 + 4) + '\x01';
          if (cVar2 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar9 & 0x1f);
          }
          *(uint *)(uVar3 + 0x44 + uVar11 * 4) =
               *(uint *)(uVar3 + 0x44 + uVar11 * 4) | 0x80000000U >> (bVar9 & 0x1f);
        }
        else {
          cVar2 = *(char *)(uVar3 + local_24 + 4);
          *(char *)(uVar3 + local_24 + 4) = *(char *)(uVar3 + local_24 + 4) + '\x01';
          if (cVar2 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar9 - 0x20 & 0x1f);
          }
          *(uint *)(uVar3 + 0xc4 + uVar11 * 4) =
               *(uint *)(uVar3 + 0xc4 + uVar11 * 4) | 0x80000000U >> (bVar9 - 0x20 & 0x1f);
        }
      }
      *piVar10 = iVar8;
      *(int *)((int)piVar10 + iVar8 + -4) = iVar8;
    }
    *piVar6 = uVar5 + 1;
    *(uint *)((int)piVar6 + (uVar5 - 4)) = uVar5 + 1;
  }
  else if ((int)uVar5 < local_2c) {
    *piVar6 = uVar5 + 1;
    *(uint *)((int)piVar6 + (uVar5 - 4)) = uVar5 + 1;
    piVar6 = (int *)((int)piVar6 + uVar5);
    local_2c = local_2c - uVar5;
    local_28 = (local_2c >> 4) - 1;
    if (0x3f < local_28) {
      local_28 = 0x3f;
    }
    if ((uVar4 & 1) == 0) {
      local_24 = ((int)uVar4 >> 4) - 1;
      if (0x3f < local_24) {
        local_24 = 0x3f;
      }
      if (puVar7[1] == puVar7[2]) {
        bVar9 = (byte)local_24;
        if (local_24 < 0x20) {
          *(uint *)(uVar3 + 0x44 + uVar11 * 4) =
               *(uint *)(uVar3 + 0x44 + uVar11 * 4) & ~(0x80000000U >> (bVar9 & 0x1f));
          *(char *)(uVar3 + local_24 + 4) = *(char *)(uVar3 + local_24 + 4) + -1;
          if (*(char *)(uVar3 + local_24 + 4) == '\0') {
            *param_1 = *param_1 & ~(0x80000000U >> (bVar9 & 0x1f));
          }
        }
        else {
          *(uint *)(uVar3 + 0xc4 + uVar11 * 4) =
               *(uint *)(uVar3 + 0xc4 + uVar11 * 4) & ~(0x80000000U >> (bVar9 - 0x20 & 0x1f));
          *(char *)(uVar3 + local_24 + 4) = *(char *)(uVar3 + local_24 + 4) + -1;
          if (*(char *)(uVar3 + local_24 + 4) == '\0') {
            param_1[1] = param_1[1] & ~(0x80000000U >> (bVar9 - 0x20 & 0x1f));
          }
        }
      }
      *(uint *)(puVar7[2] + 4) = puVar7[1];
      *(uint *)(puVar7[1] + 8) = puVar7[2];
      local_2c = local_2c + uVar4;
      local_28 = (local_2c >> 4) - 1;
      if (0x3f < local_28) {
        local_28 = 0x3f;
      }
    }
    iVar1 = iVar1 + local_28 * 8;
    piVar6[1] = *(int *)(iVar1 + 4);
    piVar6[2] = iVar1;
    *(int **)(iVar1 + 4) = piVar6;
    *(int **)(piVar6[1] + 8) = piVar6;
    if (piVar6[1] == piVar6[2]) {
      bVar9 = (byte)local_28;
      if (local_28 < 0x20) {
        cVar2 = *(char *)(uVar3 + local_28 + 4);
        *(char *)(uVar3 + local_28 + 4) = *(char *)(uVar3 + local_28 + 4) + '\x01';
        if (cVar2 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar9 & 0x1f);
        }
        *(uint *)(uVar3 + 0x44 + uVar11 * 4) =
             *(uint *)(uVar3 + 0x44 + uVar11 * 4) | 0x80000000U >> (bVar9 & 0x1f);
      }
      else {
        cVar2 = *(char *)(uVar3 + local_28 + 4);
        *(char *)(uVar3 + local_28 + 4) = *(char *)(uVar3 + local_28 + 4) + '\x01';
        if (cVar2 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar9 - 0x20 & 0x1f);
        }
        *(uint *)(uVar3 + 0xc4 + uVar11 * 4) =
             *(uint *)(uVar3 + 0xc4 + uVar11 * 4) | 0x80000000U >> (bVar9 - 0x20 & 0x1f);
      }
    }
    *piVar6 = local_2c;
    *(int *)((int)piVar6 + local_2c + -4) = local_2c;
  }
  return 1;
}


/*
 * FUN_1000adf0 at 1000adf0
 * undefined __stdcall FUN_1000adf0(void)
 * Address ranges: 1000adf0-1000af1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1000adf0(void)

{
  if (DAT_10031a80 != (undefined4 *)0x0) {
    VirtualFree((LPVOID)(DAT_10031a80[3] + DAT_10031a78 * 0x8000),0x8000,0x4000);
    DAT_10031a80[2] = DAT_10031a80[2] | 0x80000000U >> ((byte)DAT_10031a78 & 0x1f);
    *(undefined4 *)(DAT_10031a80[4] + 0xc4 + DAT_10031a78 * 4) = 0;
    *(char *)(DAT_10031a80[4] + 0x43) = *(char *)(DAT_10031a80[4] + 0x43) + -1;
    if (*(char *)(DAT_10031a80[4] + 0x43) == '\0') {
      DAT_10031a80[1] = DAT_10031a80[1] & 0xfffffffe;
    }
    if ((DAT_10031a80[2] == -1) && (1 < DAT_10031a84)) {
      HeapFree(DAT_10031a8c,0,(LPVOID)DAT_10031a80[4]);
      FUN_1000dda0(DAT_10031a80,DAT_10031a80 + 5,
                   (DAT_10031a88 + DAT_10031a84 * 0x14) - (int)(DAT_10031a80 + 5));
      DAT_10031a84 = DAT_10031a84 + -1;
    }
    DAT_10031a80 = (undefined4 *)0x0;
  }
  return;
}


/*
 * FUN_1000af20 at 1000af20
 * undefined4 __stdcall FUN_1000af20(void)
 * Address ranges: 1000af20-1000b53c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1000af20(void)

{
  LPVOID lp;
  uint uVar1;
  BOOL BVar2;
  undefined4 uVar3;
  uint *puVar4;
  byte bVar5;
  uint *puVar6;
  int local_16c;
  uint local_15c;
  uint local_154;
  int local_150;
  uint local_14c;
  uint local_148;
  int local_144;
  uint *local_140;
  uint *local_138;
  uint *local_134;
  uint local_130;
  uint *local_12c;
  int local_124;
  uint local_120;
  int aiStack_11c [64];
  uint *local_1c;
  int local_18;
  uint *local_14;
  int local_10;
  uint *local_c;
  uint local_8;
  
  BVar2 = IsBadWritePtr(DAT_10031a88,DAT_10031a84 * 0x14);
  if (BVar2 == 0) {
    local_140 = DAT_10031a88;
    for (local_124 = 0; local_124 < DAT_10031a84; local_124 = local_124 + 1) {
      lp = (LPVOID)local_140[4];
      BVar2 = IsBadWritePtr(lp,0x41c4);
      if (BVar2 != 0) {
        return 0xfffffffe;
      }
      local_12c = (uint *)local_140[3];
      local_1c = (uint *)((int)lp + 0x144);
      local_8 = local_140[2];
      local_148 = 0;
      local_15c = 0;
      for (local_10 = 0; local_10 < 0x20; local_10 = local_10 + 1) {
        local_120 = 0;
        local_154 = 0;
        local_130 = 0;
        for (local_150 = 0; local_150 < 0x40; local_150 = local_150 + 1) {
          aiStack_11c[local_150] = 0;
        }
        if (-1 < (int)local_8) {
          BVar2 = IsBadWritePtr(local_12c,0x8000);
          if (BVar2 != 0) {
            return 0xfffffffc;
          }
          local_c = local_12c;
          for (local_144 = 0; local_144 < 8; local_144 = local_144 + 1) {
            local_134 = local_c + 3;
            puVar6 = local_c + 0x3ff;
            if ((local_c[2] != 0xffffffff) || (*puVar6 != 0xffffffff)) {
              return 0xfffffffb;
            }
            do {
              uVar1 = *local_134;
              if ((uVar1 & 1) == 0) {
                local_150 = ((int)uVar1 >> 4) + -1;
                if (0x3f < local_150) {
                  local_150 = 0x3f;
                }
                aiStack_11c[local_150] = aiStack_11c[local_150] + 1;
                local_14c = uVar1;
              }
              else {
                if (0x400 < (int)(uVar1 - 1)) {
                  return 0xfffffffa;
                }
                local_130 = local_130 + 1;
                local_14c = uVar1 - 1;
              }
              if ((((int)local_14c < 0x10) || ((local_14c & 0xf) != 0)) || (0xff0 < (int)local_14c))
              {
                return 0xfffffff9;
              }
              if (*(uint *)((int)local_134 + (local_14c - 4)) != uVar1) {
                return 0xfffffff8;
              }
              local_134 = (uint *)((int)local_134 + local_14c);
            } while (local_134 < puVar6);
            if (local_134 != puVar6) {
              return 0xfffffff8;
            }
            local_c = local_c + 0x400;
          }
          if (*local_1c != local_130) {
            return 0xfffffff7;
          }
          local_138 = local_1c;
          for (local_18 = 0; local_18 < 0x40; local_18 = local_18 + 1) {
            local_134 = local_138;
            for (local_16c = 0;
                (puVar6 = (uint *)local_134[1], puVar6 != local_138 &&
                (local_16c != aiStack_11c[local_18])); local_16c = local_16c + 1) {
              if ((puVar6 < local_12c) || (local_12c + 0x2000 <= puVar6)) {
                return 0xfffffff6;
              }
              puVar4 = (uint *)(((uint)puVar6 & 0xfffff000) + 0xffc);
              for (local_14 = (uint *)(((uint)puVar6 & 0xfffff000) + 0xc);
                  (local_14 != puVar4 && (local_14 != puVar6));
                  local_14 = (uint *)((int)local_14 + (*local_14 & 0xfffffffe))) {
              }
              if (local_14 == puVar4) {
                return 0xfffffff5;
              }
              local_150 = ((int)*puVar6 >> 4) + -1;
              if (0x3f < local_150) {
                local_150 = 0x3f;
              }
              if (local_150 != local_18) {
                return 0xfffffff4;
              }
              if ((uint *)puVar6[2] != local_134) {
                return 0xfffffff3;
              }
              local_134 = puVar6;
            }
            if (local_16c != 0) {
              bVar5 = (byte)local_18;
              if (local_18 < 0x20) {
                local_120 = local_120 | 0x80000000U >> (bVar5 & 0x1f);
                local_148 = local_148 | 0x80000000U >> (bVar5 & 0x1f);
              }
              else {
                local_154 = local_154 | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
                local_15c = local_15c | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
              }
            }
            if (((uint *)local_134[1] != local_138) || (local_16c != aiStack_11c[local_18])) {
              return 0xfffffff2;
            }
            if ((uint *)local_138[2] != local_134) {
              return 0xfffffff1;
            }
            local_138 = local_138 + 2;
          }
        }
        if ((local_120 != *(uint *)((int)lp + local_10 * 4 + 0x44)) ||
           (local_154 != *(uint *)((int)lp + local_10 * 4 + 0xc4))) {
          return 0xfffffff0;
        }
        local_12c = local_12c + 0x2000;
        local_1c = local_1c + 0x81;
        local_8 = local_8 << 1;
      }
      if ((local_148 != *local_140) || (local_15c != local_140[1])) {
        return 0xffffffef;
      }
      local_140 = local_140 + 5;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/*
 * FUN_1000b540 at 1000b540
 * int __cdecl FUN_1000b540(undefined1 * param_1, byte * param_2)
 * Address ranges: 1000b540-1000b639
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_1000b540(undefined1 *param_1,byte *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002ce84,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_2 == (byte *)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002ce84,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = 0x7fffffff;
  iVar2 = FUN_1000cf00((int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1000cc80(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}


/*
 * FUN_1000b640 at 1000b640
 * uint __cdecl FUN_1000b640(int param_1, uint param_2)
 * Address ranges: 1000b640-1000b6f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_1000b640(int param_1,uint param_2)

{
  uint uVar1;
  BOOL BVar2;
  CHAR local_10;
  CHAR local_f;
  undefined1 local_e;
  int local_c;
  uint local_8;
  
  if (param_1 + 1U < 0x101) {
    uVar1 = *(ushort *)(PTR_DAT_10030008 + param_1 * 2) & param_2;
  }
  else {
    if ((*(ushort *)(PTR_DAT_10030008 + (param_1 >> 8 & 0xffU) * 2) & 0x8000) == 0) {
      local_10 = (CHAR)param_1;
      local_f = '\0';
      local_c = 1;
    }
    else {
      local_10 = (CHAR)((uint)param_1 >> 8);
      local_f = (CHAR)param_1;
      local_e = 0;
      local_c = 2;
    }
    BVar2 = FUN_1000e0e0(1,&local_10,local_c,(LPWORD)&local_8,0,0,1);
    if (BVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = local_8 & 0xffff & param_2;
    }
  }
  return uVar1;
}


/*
 * FUN_1000b700 at 1000b700
 * DWORD __cdecl FUN_1000b700(uint param_1)
 * Address ranges: 1000b700-1000b7d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


DWORD __cdecl FUN_1000b700(uint param_1)

{
  undefined4 *puVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD *pDVar3;
  DWORD local_8;
  
  if ((DAT_10031bfc <= param_1) ||
     ((*(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) == 0)) {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    return 0xffffffff;
  }
  FUN_100029d0(param_1);
  if ((*(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0) {
    hFile = (HANDLE)FUN_10002850(param_1);
    BVar2 = FlushFileBuffers(hFile);
    if (BVar2 == 0) {
      local_8 = GetLastError();
    }
    else {
      local_8 = 0;
    }
    if (local_8 == 0) goto LAB_1000b7bf;
    pDVar3 = FUN_10006f30();
    *pDVar3 = local_8;
  }
  puVar1 = (undefined4 *)FUN_10006f20();
  *puVar1 = 9;
  local_8 = 0xffffffff;
LAB_1000b7bf:
  __unlock_fhandle(param_1);
  return local_8;
}


/*
 * FUN_1000b7e0 at 1000b7e0
 * int __cdecl FUN_1000b7e0(uint param_1, char * param_2, uint param_3)
 * Address ranges: 1000b7e0-1000b861
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_1000b7e0(uint param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  int iVar3;
  
  if ((param_1 < DAT_10031bfc) &&
     ((*(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100029d0(param_1);
    iVar3 = FUN_1000b870(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    pDVar2 = FUN_10006f30();
    *pDVar2 = 0;
    iVar3 = -1;
  }
  return iVar3;
}


/*
 * FUN_1000b870 at 1000b870
 * int __cdecl FUN_1000b870(uint param_1, char * param_2, uint param_3)
 * Address ranges: 1000b870-1000bae2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_1000b870(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  DWORD *pDVar4;
  int iVar5;
  int local_424;
  DWORD local_41c;
  char local_418 [1028];
  DWORD local_14;
  ulong local_10;
  char *local_c;
  char *local_8;
  
  local_14 = 0;
  local_424 = 0;
  if (param_3 == 0) {
    local_424 = 0;
  }
  else {
    iVar5 = (int)param_1 >> 5;
    if ((*(byte *)((&DAT_10031ac0)[iVar5] + 4 + (param_1 & 0x1f) * 0x24) & 0x20) != 0) {
      FUN_10006ab0(param_1,0,2);
    }
    if (((int)*(char *)((&DAT_10031ac0)[iVar5] + 4 + (param_1 & 0x1f) * 0x24) & 0x80U) == 0) {
      BVar2 = WriteFile(*(HANDLE *)((&DAT_10031ac0)[iVar5] + (param_1 & 0x1f) * 0x24),param_2,
                        param_3,&local_41c,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        local_10 = GetLastError();
      }
      else {
        local_10 = 0;
        local_14 = local_41c;
      }
    }
    else {
      local_8 = param_2;
      local_10 = 0;
      do {
        if (param_3 <= (uint)((int)local_8 - (int)param_2)) break;
        local_c = local_418;
        while (((int)local_c - (int)local_418 < 0x400 &&
               ((uint)((int)local_8 - (int)param_2) < param_3))) {
          cVar1 = *local_8;
          local_8 = local_8 + 1;
          if (cVar1 == '\n') {
            local_424 = local_424 + 1;
            *local_c = '\r';
            local_c = local_c + 1;
          }
          *local_c = cVar1;
          local_c = local_c + 1;
        }
        BVar2 = WriteFile(*(HANDLE *)((&DAT_10031ac0)[iVar5] + (param_1 & 0x1f) * 0x24),local_418,
                          (int)local_c - (int)local_418,&local_41c,(LPOVERLAPPED)0x0);
        if (BVar2 == 0) {
          local_10 = GetLastError();
          break;
        }
        local_14 = local_14 + local_41c;
      } while ((int)local_c - (int)local_418 <= (int)local_41c);
    }
    if (local_14 == 0) {
      if (local_10 == 0) {
        if (((*(byte *)((&DAT_10031ac0)[iVar5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40) == 0) ||
           (*param_2 != '\x1a')) {
          puVar3 = (undefined4 *)FUN_10006f20();
          *puVar3 = 0x1c;
          pDVar4 = FUN_10006f30();
          *pDVar4 = 0;
          local_424 = -1;
        }
        else {
          local_424 = 0;
        }
      }
      else {
        if (local_10 == 5) {
          puVar3 = (undefined4 *)FUN_10006f20();
          *puVar3 = 9;
          pDVar4 = FUN_10006f30();
          *pDVar4 = local_10;
        }
        else {
          __dosmaperr(local_10);
        }
        local_424 = -1;
      }
    }
    else {
      local_424 = local_14 - local_424;
    }
  }
  return local_424;
}


/*
 * FUN_1000baf0 at 1000baf0
 * undefined __cdecl FUN_1000baf0(undefined4 * param_1)
 * Address ranges: 1000baf0-1000bbb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_1000baf0(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002cee8,0x2e,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DAT_1003142c = DAT_1003142c + 1;
  uVar3 = FUN_10003710((void *)0x1000,2,0x1002cee8,0x3b);
  param_1[2] = uVar3;
  if (param_1[2] == 0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  *param_1 = param_1[2];
  param_1[1] = 0;
  return;
}


/*
 * FID_conflict:__open at 1000bbc0
 * int __cdecl FID_conflict:__open(char * _Filename, int _OpenFlag, ...)
 * Address ranges: 1000bbc0-1000bbfe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Multiple Matches With Different Base Names  __open  __wopen  Library: Visual Studio 2003 Debug
 */


/* Library Function - Multiple Matches With Different Base Names
    __open
    __wopen
   
   Library: Visual Studio 2003 Debug */

int __cdecl FID_conflict___open(char *_Filename,int _OpenFlag,...)

{
  uint uVar1;
  uint in_stack_0000000c;
  
  uVar1 = FUN_1000bc00(_Filename,_OpenFlag,0x40,in_stack_0000000c);
  return uVar1;
}


/*
 * FUN_1000bc00 at 1000bc00
 * uint __cdecl FUN_1000bc00(LPCSTR param_1, uint param_2, undefined4 param_3, uint param_4)
 * Address ranges: 1000bc00-1000c10d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __cdecl FUN_1000bc00(LPCSTR param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  byte local_3c;
  uint local_38;
  char local_34 [4];
  undefined4 local_30;
  uint local_2c;
  _SECURITY_ATTRIBUTES local_28;
  DWORD local_1c;
  uint local_18;
  uint local_14;
  DWORD local_10;
  DWORD local_c;
  HANDLE local_8;
  
  local_28.nLength = 0xc;
  local_28.lpSecurityDescriptor = (LPVOID)0x0;
  bVar6 = (param_2 & 0x80) == 0;
  if (bVar6) {
    local_3c = 0;
  }
  else {
    local_3c = 0x10;
  }
  local_28.bInheritHandle = (BOOL)bVar6;
  if ((param_2 & 0x8000) == 0) {
    if ((param_2 & 0x4000) == 0) {
      if (DAT_10031630 != 0x8000) {
        local_3c = local_3c | 0x80;
      }
    }
    else {
      local_3c = local_3c | 0x80;
    }
  }
  uVar5 = param_2 & 3;
  if (uVar5 == 0) {
    local_38 = 0x80000000;
  }
  else if (uVar5 == 1) {
    local_38 = 0x40000000;
  }
  else {
    if (uVar5 != 2) {
      puVar1 = (undefined4 *)FUN_10006f20();
      *puVar1 = 0x16;
      pDVar2 = FUN_10006f30();
      *pDVar2 = 0;
      return 0xffffffff;
    }
    local_38 = 0xc0000000;
  }
  switch(param_3) {
  case 0x10:
    local_c = 0;
    break;
  default:
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 0x16;
    pDVar2 = FUN_10006f30();
    *pDVar2 = 0;
    return 0xffffffff;
  case 0x20:
    local_c = 1;
    break;
  case 0x30:
    local_c = 2;
    break;
  case 0x40:
    local_c = 3;
  }
  uVar5 = param_2 & 0x700;
  if (uVar5 < 0x401) {
    if (uVar5 != 0x400) {
      if (0x200 < uVar5) {
        if (uVar5 != 0x300) {
LAB_1000bdc6:
          puVar1 = (undefined4 *)FUN_10006f20();
          *puVar1 = 0x16;
          pDVar2 = FUN_10006f30();
          *pDVar2 = 0;
          return 0xffffffff;
        }
        local_1c = 2;
        goto LAB_1000bde4;
      }
      if (uVar5 == 0x200) goto LAB_1000bdb4;
      if (uVar5 != 0) {
        if (uVar5 != 0x100) goto LAB_1000bdc6;
        local_1c = 4;
        goto LAB_1000bde4;
      }
    }
    local_1c = 3;
  }
  else {
    if (uVar5 != 0x500) {
      if (uVar5 == 0x600) {
LAB_1000bdb4:
        local_1c = 5;
        goto LAB_1000bde4;
      }
      if (uVar5 != 0x700) goto LAB_1000bdc6;
    }
    local_1c = 1;
  }
LAB_1000bde4:
  local_2c = 0x80;
  if ((param_2 & 0x100) != 0) {
    local_14 = param_4;
    local_30 = 0;
    if ((param_4 & ~DAT_100314a8 & 0x80) == 0) {
      local_2c = 1;
    }
  }
  if ((param_2 & 0x40) != 0) {
    local_2c = local_2c | 0x4000000;
    local_38 = local_38 | 0x10000;
  }
  if ((param_2 & 0x1000) != 0) {
    local_2c = local_2c | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      local_2c = local_2c | 0x10000000;
    }
  }
  else {
    local_2c = local_2c | 0x8000000;
  }
  local_18 = FUN_100024c0();
  if (local_18 == 0xffffffff) {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 0x18;
    pDVar2 = FUN_10006f30();
    *pDVar2 = 0;
    local_18 = 0xffffffff;
  }
  else {
    local_8 = CreateFileA(param_1,local_38,local_c,&local_28,local_1c,local_2c,(HANDLE)0x0);
    if (local_8 == (HANDLE)0xffffffff) {
      DVar3 = GetLastError();
      __dosmaperr(DVar3);
      __unlock_fhandle(local_18);
      local_18 = 0xffffffff;
    }
    else {
      local_10 = GetFileType(local_8);
      if (local_10 == 0) {
        CloseHandle(local_8);
        DVar3 = GetLastError();
        __dosmaperr(DVar3);
        __unlock_fhandle(local_18);
        local_18 = 0xffffffff;
      }
      else {
        if (local_10 == 2) {
          local_3c = local_3c | 0x40;
        }
        else if (local_10 == 3) {
          local_3c = local_3c | 8;
        }
        __set_osfhnd(local_18,(intptr_t)local_8);
        *(byte *)((&DAT_10031ac0)[(int)local_18 >> 5] + 4 + (local_18 & 0x1f) * 0x24) = local_3c | 1
        ;
        if ((((local_3c & 0x48) == 0) && (((int)(char)(local_3c | 1) & 0x80U) != 0)) &&
           ((param_2 & 2) != 0)) {
          DVar3 = FUN_10006ab0(local_18,-1,2);
          if (DVar3 == 0xffffffff) {
            pDVar2 = FUN_10006f30();
            if (*pDVar2 != 0x83) {
              FUN_10005680(local_18);
              __unlock_fhandle(local_18);
              return 0xffffffff;
            }
          }
          else {
            local_34[0] = '\0';
            iVar4 = FUN_10005d80(local_18,local_34,1);
            if (((iVar4 == 0) && (local_34[0] == '\x1a')) &&
               (iVar4 = FUN_1000e320(local_18,DVar3), iVar4 == -1)) {
              FUN_10005680(local_18);
              __unlock_fhandle(local_18);
              return 0xffffffff;
            }
            DVar3 = FUN_10006ab0(local_18,0,0);
            if (DVar3 == 0xffffffff) {
              FUN_10005680(local_18);
              __unlock_fhandle(local_18);
              return 0xffffffff;
            }
          }
        }
        if (((local_3c & 0x48) == 0) && ((param_2 & 8) != 0)) {
          *(byte *)((&DAT_10031ac0)[(int)local_18 >> 5] + 4 + (local_18 & 0x1f) * 0x24) =
               *(byte *)((&DAT_10031ac0)[(int)local_18 >> 5] + 4 + (local_18 & 0x1f) * 0x24) | 0x20;
        }
        __unlock_fhandle(local_18);
      }
    }
  }
  return local_18;
}


/*
 * __XcptFilter at 1000c160
 * int __cdecl __XcptFilter(ulong _ExceptionNum, _EXCEPTION_POINTERS * _ExceptionPtr)
 * Address ranges: 1000c160-1000c31d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __XcptFilter  Library: Visual Studio 2003 Debug
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __XcptFilter
   
   Library: Visual Studio 2003 Debug */

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  code *pcVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  int *piVar5;
  int iVar6;
  int local_18;
  
  pDVar4 = FUN_100077b0();
  piVar5 = FUN_1000c320(_ExceptionNum,(int *)pDVar4[0x14]);
  if ((piVar5 == (int *)0x0) || (piVar5[2] == 0)) {
    iVar6 = UnhandledExceptionFilter(_ExceptionPtr);
  }
  else if (piVar5[2] == 5) {
    piVar5[2] = 0;
    iVar6 = 1;
  }
  else if (piVar5[2] == 1) {
    iVar6 = -1;
  }
  else {
    pcVar1 = (code *)piVar5[2];
    DVar2 = pDVar4[0x15];
    pDVar4[0x15] = (DWORD)_ExceptionPtr;
    if (piVar5[1] == 8) {
      for (local_18 = DAT_10030298; local_18 < DAT_10030298 + _DAT_1003029c; local_18 = local_18 + 1
          ) {
        *(undefined4 *)(pDVar4[0x14] + 8 + local_18 * 0xc) = 0;
      }
      DVar3 = pDVar4[0x16];
      if (*piVar5 == -0x3fffff72) {
        pDVar4[0x16] = 0x83;
      }
      else if (*piVar5 == -0x3fffff70) {
        pDVar4[0x16] = 0x81;
      }
      else if (*piVar5 == -0x3fffff6f) {
        pDVar4[0x16] = 0x84;
      }
      else if (*piVar5 == -0x3fffff6d) {
        pDVar4[0x16] = 0x85;
      }
      else if (*piVar5 == -0x3fffff73) {
        pDVar4[0x16] = 0x82;
      }
      else if (*piVar5 == -0x3fffff71) {
        pDVar4[0x16] = 0x86;
      }
      else if (*piVar5 == -0x3fffff6e) {
        pDVar4[0x16] = 0x8a;
      }
      (*pcVar1)(8,pDVar4[0x16]);
      pDVar4[0x16] = DVar3;
    }
    else {
      piVar5[2] = 0;
      (*pcVar1)(piVar5[1]);
    }
    pDVar4[0x15] = DVar2;
    iVar6 = -1;
  }
  return iVar6;
}


/*
 * FUN_1000c320 at 1000c320
 * int * __cdecl FUN_1000c320(int param_1, int * param_2)
 * Address ranges: 1000c320-1000c378
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * __cdecl FUN_1000c320(int param_1,int *param_2)

{
  int *local_8;
  
  local_8 = param_2;
  do {
    if (*local_8 == param_1) break;
    local_8 = local_8 + 3;
  } while (local_8 < param_2 + DAT_100302a4 * 3);
  if ((param_2 + DAT_100302a4 * 3 <= local_8) || (*local_8 != param_1)) {
    local_8 = (int *)0x0;
  }
  return local_8;
}


/*
 * FUN_1000c380 at 1000c380
 * undefined4 __cdecl FUN_1000c380(UINT param_1)
 * Address ranges: 1000c380-1000c6c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_1000c380(UINT param_1)

{
  UINT CodePage;
  undefined4 uVar1;
  BOOL BVar2;
  BYTE *local_2c;
  uint local_28;
  _cpinfo local_24;
  uint local_10;
  byte *local_c;
  uint local_8;
  
  FUN_100073f0(0x19);
  CodePage = getSystemCP(param_1);
  if (CodePage == DAT_100317c8) {
    FUN_10007490(0x19);
    uVar1 = 0;
  }
  else if (CodePage == 0) {
    setSBCS();
    FUN_1000c830();
    FUN_10007490(0x19);
    uVar1 = 0;
  }
  else {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      if (*(UINT *)(&DAT_100302b0 + local_8 * 0x30) == CodePage) {
        for (local_28 = 0; local_28 < 0x101; local_28 = local_28 + 1) {
          (&DAT_10031960)[local_28] = 0;
        }
        for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
          for (local_c = &DAT_100302c0 + local_10 * 8 + local_8 * 0x30;
              (*local_c != 0 && (local_c[1] != 0)); local_c = local_c + 2) {
            for (local_28 = (uint)*local_c; local_28 <= local_c[1]; local_28 = local_28 + 1) {
              (&DAT_10031961)[local_28] = (&DAT_10031961)[local_28] | (&DAT_100302a8)[local_10];
            }
          }
        }
        DAT_1003184c = 1;
        DAT_100317c8 = CodePage;
        DAT_10031a64 = FUN_1000c730(CodePage);
        for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
          *(undefined2 *)(&DAT_10031840 + local_10 * 2) =
               *(undefined2 *)(&DAT_100302b4 + local_10 * 2 + local_8 * 0x30);
        }
        FUN_1000c830();
        FUN_10007490(0x19);
        return 0;
      }
    }
    BVar2 = GetCPInfo(CodePage,&local_24);
    if (BVar2 == 1) {
      for (local_28 = 0; local_28 < 0x101; local_28 = local_28 + 1) {
        (&DAT_10031960)[local_28] = 0;
      }
      DAT_10031a64 = 0;
      if (local_24.MaxCharSize < 2) {
        DAT_1003184c = 0;
        DAT_100317c8 = CodePage;
      }
      else {
        DAT_100317c8 = CodePage;
        for (local_2c = local_24.LeadByte; (*local_2c != 0 && (local_2c[1] != 0));
            local_2c = local_2c + 2) {
          for (local_28 = (uint)*local_2c; local_28 <= local_2c[1]; local_28 = local_28 + 1) {
            (&DAT_10031961)[local_28] = (&DAT_10031961)[local_28] | 4;
          }
        }
        for (local_28 = 1; local_28 < 0xff; local_28 = local_28 + 1) {
          (&DAT_10031961)[local_28] = (&DAT_10031961)[local_28] | 8;
        }
        DAT_10031a64 = FUN_1000c730(DAT_100317c8);
        DAT_1003184c = 1;
      }
      for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
        *(undefined2 *)(&DAT_10031840 + local_10 * 2) = 0;
      }
      FUN_1000c830();
      FUN_10007490(0x19);
      uVar1 = 0;
    }
    else if (DAT_10031628 == 0) {
      FUN_10007490(0x19);
      uVar1 = 0xffffffff;
    }
    else {
      setSBCS();
      FUN_1000c830();
      FUN_10007490(0x19);
      uVar1 = 0;
    }
  }
  return uVar1;
}


/*
 * getSystemCP at 1000c6d0
 * UINT __cdecl getSystemCP(UINT param_1)
 * Address ranges: 1000c6d0-1000c728
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _getSystemCP  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    _getSystemCP
   
   Library: Visual Studio 2003 Debug */

UINT __cdecl getSystemCP(UINT param_1)

{
  DAT_10031628 = 0;
  if (param_1 == 0xfffffffe) {
    DAT_10031628 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == 0xfffffffd) {
    DAT_10031628 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffc) {
    DAT_10031628 = 1;
    param_1 = DAT_1003164c;
  }
  return param_1;
}


/*
 * FUN_1000c730 at 1000c730
 * undefined4 __cdecl FUN_1000c730(undefined4 param_1)
 * Address ranges: 1000c730-1000c77f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_1000c730(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0x3a4:
    uVar1 = 0x411;
    break;
  default:
    uVar1 = 0;
    break;
  case 0x3a8:
    uVar1 = 0x804;
    break;
  case 0x3b5:
    uVar1 = 0x412;
    break;
  case 0x3b6:
    uVar1 = 0x404;
  }
  return uVar1;
}


/*
 * setSBCS at 1000c7b0
 * undefined __cdecl setSBCS(void)
 * Address ranges: 1000c7b0-1000c823
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _setSBCS  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 2003 Debug */

void __cdecl setSBCS(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x101; local_8 = local_8 + 1) {
    (&DAT_10031960)[local_8] = 0;
  }
  DAT_100317c8 = 0;
  DAT_1003184c = 0;
  DAT_10031a64 = 0;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    *(undefined2 *)(&DAT_10031840 + local_8 * 2) = 0;
  }
  return;
}


/*
 * FUN_1000c830 at 1000c830
 * undefined __stdcall FUN_1000c830(void)
 * Address ranges: 1000c830-1000cb31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1000c830(void)

{
  BOOL BVar1;
  uint local_520;
  WCHAR local_51c [128];
  WCHAR local_41c [128];
  _cpinfo local_31c;
  CHAR local_308 [256];
  WORD local_208 [256];
  BYTE *local_8;
  
  BVar1 = GetCPInfo(DAT_100317c8,&local_31c);
  if (BVar1 == 1) {
    for (local_520 = 0; local_520 < 0x100; local_520 = local_520 + 1) {
      local_308[local_520] = (CHAR)local_520;
    }
    local_308[0] = ' ';
    for (local_8 = local_31c.LeadByte; *local_8 != 0; local_8 = local_8 + 2) {
      for (local_520 = (uint)*local_8; local_520 <= local_8[1]; local_520 = local_520 + 1) {
        local_308[local_520] = ' ';
      }
    }
    FUN_1000e0e0(1,local_308,0x100,local_208,DAT_100317c8,DAT_10031a64,0);
    FUN_1000e550(DAT_10031a64,0x100,local_308,0x100,local_41c,0x100,DAT_100317c8,0);
    FUN_1000e550(DAT_10031a64,0x200,local_308,0x100,local_51c,0x100,DAT_100317c8,0);
    for (local_520 = 0; local_520 < 0x100; local_520 = local_520 + 1) {
      if ((local_208[local_520] & 1) == 0) {
        if ((local_208[local_520] & 2) == 0) {
          (&DAT_10031860)[local_520] = 0;
        }
        else {
          (&DAT_10031961)[local_520] = (&DAT_10031961)[local_520] | 0x20;
          (&DAT_10031860)[local_520] = *(undefined1 *)((int)local_51c + local_520);
        }
      }
      else {
        (&DAT_10031961)[local_520] = (&DAT_10031961)[local_520] | 0x10;
        (&DAT_10031860)[local_520] = *(undefined1 *)((int)local_41c + local_520);
      }
    }
  }
  else {
    for (local_520 = 0; local_520 < 0x100; local_520 = local_520 + 1) {
      if ((local_520 < 0x41) || (0x5a < local_520)) {
        if ((local_520 < 0x61) || (0x7a < local_520)) {
          (&DAT_10031860)[local_520] = 0;
        }
        else {
          (&DAT_10031961)[local_520] = (&DAT_10031961)[local_520] | 0x20;
          (&DAT_10031860)[local_520] = (char)local_520 + -0x20;
        }
      }
      else {
        (&DAT_10031961)[local_520] = (&DAT_10031961)[local_520] | 0x10;
        (&DAT_10031860)[local_520] = (char)local_520 + ' ';
      }
    }
  }
  return;
}


/*
 * FUN_1000cb40 at 1000cb40
 * undefined4 __stdcall FUN_1000cb40(void)
 * Address ranges: 1000cb40-1000cb56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1000cb40(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_100317c8;
  if (DAT_1003184c == 0) {
    uVar1 = 0;
  }
  return uVar1;
}


/*
 * FUN_1000cb60 at 1000cb60
 * undefined __stdcall FUN_1000cb60(void)
 * Address ranges: 1000cb60-1000cb81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1000cb60(void)

{
  if (DAT_10031aa8 == 0) {
    FUN_1000c380(0xfffffffd);
    DAT_10031aa8 = 1;
  }
  return;
}


/*
 * __aulldiv at 1000cb90
 * undefined8 __stdcall __aulldiv(uint param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 1000cb90-1000cbf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __aulldiv  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio 2003 Debug */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar6 >> 1;
      uVar3 = (uint)(CONCAT14((uVar6 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar7 >> 1;
      uVar9 = (uint)(CONCAT14((uVar7 & 1) != 0,uVar9) >> 1);
      uVar6 = uVar5;
      uVar7 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar9) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar9 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar9)) ||
       ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


/*
 * __aullrem at 1000cc00
 * undefined8 __stdcall __aullrem(uint param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 1000cc00-1000cc74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __aullrem  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio 2003 Debug */

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar4 = param_1;
  uVar9 = param_4;
  uVar10 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar10 >> 1;
      uVar4 = (uint)(CONCAT14((uVar10 & 1) != 0,uVar4) >> 1);
      uVar9 = uVar5;
      uVar10 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar4) / (ulonglong)uVar3;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}


/*
 * FUN_1000cc80 at 1000cc80
 * uint __cdecl FUN_1000cc80(uint param_1, int * param_2)
 * Address ranges: 1000cc80-1000cef3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_1000cc80(uint param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined *local_18;
  uint local_10;
  uint local_8;
  
  if ((param_2 == (int *)0x0) &&
     (iVar3 = FUN_10003050(2,0x1002cf34,0x69,0,(byte *)"str != NULL"), iVar3 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  piVar2 = param_2;
  uVar4 = param_2[4];
  if (((param_2[3] & 0x82U) == 0) || ((param_2[3] & 0x40U) != 0)) {
    param_2[3] = param_2[3] | 0x20;
    uVar4 = 0xffffffff;
  }
  else {
    if ((param_2[3] & 1U) != 0) {
      param_2[1] = 0;
      if ((param_2[3] & 0x10U) == 0) {
        param_2[3] = param_2[3] | 0x20;
        return 0xffffffff;
      }
      *param_2 = param_2[2];
      param_2[3] = param_2[3] & 0xfffffffe;
    }
    param_2[3] = param_2[3] | 2;
    param_2[3] = param_2[3] & 0xffffffef;
    param_2[1] = 0;
    local_10 = 0;
    if (((param_2[3] & 0x10cU) == 0) &&
       (((param_2 != (int *)&DAT_1002fa58 && (param_2 != (int *)&DAT_1002fa78)) ||
        (iVar3 = __isatty(uVar4), iVar3 == 0)))) {
      FUN_1000baf0(piVar2);
    }
    if ((piVar2[3] & 0x108U) == 0) {
      local_8 = 1;
      local_10 = FUN_1000b7e0(uVar4,(char *)&param_1,1);
    }
    else {
      if ((*piVar2 - piVar2[2] < 0) &&
         (iVar3 = FUN_10003050(2,0x1002cf34,0xa0,0,
                               (byte *)
                               "(\"inconsistent IOB fields\", stream->_ptr - stream->_base >= 0)"),
         iVar3 == 1)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      local_8 = *piVar2 - piVar2[2];
      *piVar2 = piVar2[2] + 1;
      piVar2[1] = piVar2[6] + -1;
      if ((int)local_8 < 1) {
        if (uVar4 == 0xffffffff) {
          local_18 = &DAT_1002fe78;
        }
        else {
          local_18 = (undefined *)((&DAT_10031ac0)[(int)uVar4 >> 5] + (uVar4 & 0x1f) * 0x24);
        }
        if ((local_18[4] & 0x20) != 0) {
          FUN_10006a20(uVar4,0,2);
        }
      }
      else {
        local_10 = FUN_1000b7e0(uVar4,(char *)piVar2[2],local_8);
      }
      *(undefined1 *)piVar2[2] = (undefined1)param_1;
    }
    if (local_10 == local_8) {
      uVar4 = param_1 & 0xff;
    }
    else {
      piVar2[3] = piVar2[3] | 0x20;
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}


/*
 * FUN_1000cf00 at 1000cf00
 * int __cdecl FUN_1000cf00(int * param_1, byte * param_2, undefined4 * param_3)
 * Address ranges: 1000cf00-1000db23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_1000cf00(int *param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  short sVar2;
  code *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 uVar6;
  uint uVar7;
  size_t sVar8;
  int iVar9;
  short *psVar10;
  bool bVar11;
  undefined8 uVar12;
  int local_2a8;
  uint local_294;
  CHAR local_28c [4];
  size_t local_288;
  short *local_284;
  int local_280;
  undefined8 local_27c;
  int local_274;
  undefined8 local_270;
  undefined4 local_268;
  undefined4 local_264;
  int *local_260;
  int local_25c;
  short *local_258;
  short *local_254;
  short *local_250;
  undefined2 local_24c;
  int local_248;
  char local_244;
  char local_243;
  int local_240;
  uint local_23c;
  int local_238;
  int local_234;
  int local_230;
  short local_22c [255];
  undefined2 uStack_2d;
  undefined3 uStack_2b;
  size_t local_28;
  short *local_24;
  int local_20;
  int local_1c;
  undefined2 local_18;
  int local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_28 = 0;
  local_230 = 0;
  local_1c = 0;
  pbVar5 = param_2;
  do {
    param_2 = pbVar5;
    bVar1 = *param_2;
    stack0xffffffd4 = CONCAT31(uStack_2b,bVar1);
    pbVar5 = param_2 + 1;
    if ((bVar1 == 0) || (local_230 < 0)) {
      return local_230;
    }
    if (((char)bVar1 < ' ') || ('x' < (char)bVar1)) {
      local_294 = 0;
    }
    else {
      local_294 = (int)"(\"inconsistent IOB fields\", stream->_ptr - stream->_base >= 0)"
                       [(char)bVar1 + 0x2c] & 0xf;
    }
    local_10 = local_294;
    local_1c = (int)(char)(&DAT_1002cf40)[local_294 * 8 + local_1c] >> 4;
    switch(local_1c) {
    case 0:
switchD_1000cfb9_caseD_0:
      local_20 = 0;
      pbVar4 = pbVar5;
      if ((*(ushort *)(PTR_DAT_10030008 + (uint)bVar1 * 2) & 0x8000) != 0) {
        FUN_1000dc30((int)(char)bVar1,param_1,&local_230);
        stack0xffffffd4 = CONCAT31(uStack_2b,*pbVar5);
        pbVar4 = param_2 + 2;
        if ((*pbVar5 == 0) &&
           (iVar9 = FUN_10003050(2,0x1002cfb4,0x186,0,(byte *)"ch != _T(\'\\0\')"), iVar9 == 1)) {
          pcVar3 = (code *)swi(3);
          iVar9 = (*pcVar3)();
          return iVar9;
        }
      }
      param_2 = pbVar4;
      FUN_1000dc30((int)uStack_2d._1_1_,param_1,&local_230);
      pbVar5 = param_2;
      break;
    case 1:
      local_c = 0;
      local_240 = 0;
      local_248 = 0;
      local_14 = 0;
      local_8 = 0;
      local_238 = -1;
      local_20 = 0;
      break;
    case 2:
      switch(bVar1) {
      case 0x20:
        local_8 = local_8 | 2;
        break;
      case 0x23:
        local_8 = local_8 | 0x80;
        break;
      case 0x2b:
        local_8 = local_8 | 1;
        break;
      case 0x2d:
        local_8 = local_8 | 4;
        break;
      case 0x30:
        local_8 = local_8 | 8;
      }
      break;
    case 3:
      if (bVar1 == 0x2a) {
        local_248 = FUN_1000dd40((int *)&param_3);
        if (local_248 < 0) {
          local_8 = local_8 | 4;
          local_248 = -local_248;
        }
      }
      else {
        local_248 = local_248 * 10 + -0x30 + (int)(char)bVar1;
      }
      break;
    case 4:
      local_238 = 0;
      break;
    case 5:
      if (bVar1 == 0x2a) {
        local_238 = FUN_1000dd40((int *)&param_3);
        if (local_238 < 0) {
          local_238 = -1;
        }
      }
      else {
        local_238 = local_238 * 10 + -0x30 + (int)(char)bVar1;
      }
      break;
    case 6:
      switch(bVar1) {
      case 0x49:
        if ((*pbVar5 != 0x36) || (param_2[2] != 0x34)) {
          local_1c = 0;
          goto switchD_1000cfb9_caseD_0;
        }
        local_8 = local_8 | 0x8000;
        pbVar5 = param_2 + 3;
        break;
      case 0x68:
        local_8 = local_8 | 0x20;
        break;
      case 0x6c:
        local_8 = local_8 | 0x10;
        break;
      case 0x77:
        local_8 = local_8 | 0x800;
      }
      param_2 = pbVar5;
      pbVar5 = param_2;
      break;
    case 7:
      psVar10 = local_24;
      switch(bVar1) {
      case 0x43:
        if ((local_8 & 0x830) == 0) {
          local_8 = local_8 | 0x800;
        }
      case 99:
        if ((local_8 & 0x810) == 0) {
          uVar6 = FUN_1000dd40((int *)&param_3);
          local_24c._0_1_ = (undefined1)uVar6;
          local_22c[0]._0_1_ = (undefined1)local_24c;
          local_28 = 1;
          local_24c = (short)uVar6;
        }
        else {
          local_18 = FUN_1000dd80((int *)&param_3);
          local_28 = FUN_1000e8f0((LPSTR)local_22c,local_18);
          if ((int)local_28 < 0) {
            local_240 = 1;
          }
        }
        psVar10 = local_22c;
        break;
      case 0x45:
      case 0x47:
        local_c = 1;
        stack0xffffffd4 = CONCAT31(uStack_2b,bVar1 + 0x20);
      case 0x65:
      case 0x66:
      case 0x67:
        local_8 = local_8 | 0x40;
        local_24 = local_22c;
        if (local_238 < 0) {
          local_238 = 6;
        }
        else if ((local_238 == 0) && (uStack_2d._1_1_ == 'g')) {
          local_238 = 1;
        }
        local_268 = *param_3;
        local_264 = param_3[1];
        param_3 = param_3 + 2;
        (*(code *)PTR___fptrap_100303b0)(&local_268,local_24,(int)uStack_2d._1_1_,local_238,local_c)
        ;
        if (((local_8 & 0x80) != 0) && (local_238 == 0)) {
          (*(code *)PTR___fptrap_100303bc)(local_24);
        }
        if ((uStack_2d._1_1_ == 'g') && ((local_8 & 0x80) == 0)) {
          (*(code *)PTR___fptrap_100303b4)(local_24);
        }
        if ((char)*local_24 == '-') {
          local_8 = local_8 | 0x100;
          local_24 = (short *)((int)local_24 + 1);
        }
        local_28 = _strlen((char *)local_24);
        psVar10 = local_24;
        break;
      case 0x53:
        if ((local_8 & 0x830) == 0) {
          local_8 = local_8 | 0x800;
        }
      case 0x73:
        if (local_238 == -1) {
          local_2a8 = 0x7fffffff;
        }
        else {
          local_2a8 = local_238;
        }
        local_25c = local_2a8;
        local_24 = (short *)FUN_1000dd40((int *)&param_3);
        if ((local_8 & 0x810) == 0) {
          if (local_24 == (short *)0x0) {
            local_24 = (short *)PTR_DAT_100303a0;
          }
          for (local_254 = local_24; (local_25c != 0 && ((char)*local_254 != '\0'));
              local_254 = (short *)((int)local_254 + 1)) {
            local_25c = local_25c + -1;
          }
          local_28 = (int)local_254 - (int)local_24;
          local_25c = local_25c + -1;
          psVar10 = local_24;
        }
        else {
          if (local_24 == (short *)0x0) {
            local_24 = (short *)PTR_DAT_100303a4;
          }
          local_20 = 1;
          for (local_258 = local_24; (local_25c != 0 && (*local_258 != 0));
              local_258 = local_258 + 1) {
            local_25c = local_25c + -1;
          }
          local_28 = (int)local_258 - (int)local_24 >> 1;
          local_25c = local_25c + -1;
          psVar10 = local_24;
        }
        break;
      case 0x5a:
        local_250 = (short *)FUN_1000dd40((int *)&param_3);
        if ((local_250 == (short *)0x0) || (*(int *)(local_250 + 2) == 0)) {
          local_24 = (short *)PTR_DAT_100303a0;
          local_28 = _strlen(PTR_DAT_100303a0);
          psVar10 = local_24;
        }
        else if ((local_8 & 0x800) == 0) {
          local_20 = 0;
          local_28 = (size_t)*local_250;
          psVar10 = *(short **)(local_250 + 2);
        }
        else {
          local_28 = (uint)(int)*local_250 >> 1;
          local_20 = 1;
          psVar10 = *(short **)(local_250 + 2);
        }
        break;
      case 100:
      case 0x69:
        local_8 = local_8 | 0x40;
        local_23c = 10;
        goto LAB_1000d6c5;
      case 0x6e:
        local_260 = (int *)FUN_1000dd40((int *)&param_3);
        if ((local_8 & 0x20) == 0) {
          *local_260 = local_230;
        }
        else {
          *(undefined2 *)local_260 = (undefined2)local_230;
        }
        local_240 = 1;
        psVar10 = local_24;
        break;
      case 0x6f:
        local_23c = 8;
        if ((local_8 & 0x80) != 0) {
          local_8 = local_8 | 0x200;
        }
        goto LAB_1000d6c5;
      case 0x70:
        local_238 = 8;
      case 0x58:
        local_234 = 7;
        goto LAB_1000d66f;
      case 0x75:
        local_23c = 10;
        goto LAB_1000d6c5;
      case 0x78:
        local_234 = 0x27;
LAB_1000d66f:
        local_23c = 0x10;
        if ((local_8 & 0x80) != 0) {
          local_244 = '0';
          local_243 = (char)local_234 + 'Q';
          local_14 = 2;
        }
LAB_1000d6c5:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar7 = FUN_1000dd40((int *)&param_3);
              local_27c = (ulonglong)uVar7;
            }
            else {
              iVar9 = FUN_1000dd40((int *)&param_3);
              local_27c = (ulonglong)iVar9;
            }
          }
          else if ((local_8 & 0x40) == 0) {
            uVar7 = FUN_1000dd40((int *)&param_3);
            local_27c = (ulonglong)(uVar7 & 0xffff);
          }
          else {
            uVar6 = FUN_1000dd40((int *)&param_3);
            local_27c = (ulonglong)(int)(short)uVar6;
          }
        }
        else {
          local_27c = FUN_1000dd60((int *)&param_3);
        }
        if ((((local_8 & 0x40) == 0) || (0 < local_27c._4_4_)) || (-1 < (longlong)local_27c)) {
          local_270 = local_27c;
        }
        else {
          local_270 = CONCAT44(-(local_27c._4_4_ + (uint)((int)local_27c != 0)),-(int)local_27c);
          local_8 = local_8 | 0x100;
        }
        if ((local_8 & 0x8000) == 0) {
          local_270 = local_270 & 0xffffffff;
        }
        if (local_238 < 0) {
          local_238 = 1;
        }
        else {
          local_8 = local_8 & 0xfffffff7;
        }
        if ((uint)local_270 == 0 && local_270._4_4_ == 0) {
          local_14 = 0;
        }
        local_24 = &uStack_2d;
        while( true ) {
          iVar9 = local_238 + -1;
          if ((local_238 < 1) && ((uint)local_270 == 0 && local_270._4_4_ == 0)) break;
          local_238 = iVar9;
          uVar12 = __aullrem((uint)local_270,local_270._4_4_,local_23c,(int)local_23c >> 0x1f);
          local_274 = (int)uVar12 + 0x30;
          local_270 = __aulldiv((uint)local_270,local_270._4_4_,local_23c,(int)local_23c >> 0x1f);
          if (0x39 < local_274) {
            local_274 = local_274 + local_234;
          }
          *(char *)local_24 = (char)local_274;
          local_24 = (short *)((int)local_24 + -1);
        }
        local_28 = (int)&uStack_2d - (int)local_24;
        psVar10 = (short *)((int)local_24 + 1);
        local_238 = iVar9;
        if (((local_8 & 0x200) != 0) && ((*(char *)psVar10 != '0' || (local_28 == 0)))) {
          *(char *)local_24 = '0';
          local_28 = local_28 + 1;
          psVar10 = local_24;
        }
      }
      local_24 = psVar10;
      if (local_240 == 0) {
        if ((local_8 & 0x40) != 0) {
          if ((local_8 & 0x100) == 0) {
            if ((local_8 & 1) == 0) {
              if ((local_8 & 2) != 0) {
                local_244 = ' ';
                local_14 = 1;
              }
            }
            else {
              local_244 = '+';
              local_14 = 1;
            }
          }
          else {
            local_244 = '-';
            local_14 = 1;
          }
        }
        local_280 = (local_248 - local_28) - local_14;
        if ((local_8 & 0xc) == 0) {
          FUN_1000dcb0(0x20,local_280,param_1,&local_230);
        }
        FUN_1000dcf0(&local_244,local_14,param_1,&local_230);
        if (((local_8 & 8) != 0) && ((local_8 & 4) == 0)) {
          FUN_1000dcb0(0x30,local_280,param_1,&local_230);
        }
        if ((local_20 == 0) || ((int)local_28 < 1)) {
          FUN_1000dcf0((char *)local_24,local_28,param_1,&local_230);
        }
        else {
          local_284 = local_24;
          local_288 = local_28;
          while (sVar8 = local_288 - 1, bVar11 = local_288 != 0, local_288 = sVar8, bVar11) {
            sVar2 = *local_284;
            local_284 = local_284 + 1;
            iVar9 = FUN_1000e8f0(local_28c,sVar2);
            if (iVar9 < 1) break;
            FUN_1000dcf0(local_28c,iVar9,param_1,&local_230);
          }
        }
        if ((local_8 & 4) != 0) {
          FUN_1000dcb0(0x20,local_280,param_1,&local_230);
        }
      }
    }
  } while( true );
}


/*
 * FUN_1000dc30 at 1000dc30
 * undefined __cdecl FUN_1000dc30(uint param_1, int * param_2, int * param_3)
 * Address ranges: 1000dc30-1000dca6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_1000dc30(uint param_1,int *param_2,int *param_3)

{
  uint local_8;
  
  param_2[1] = param_2[1] + -1;
  if (param_2[1] < 0) {
    local_8 = FUN_1000cc80(param_1,param_2);
  }
  else {
    *(undefined1 *)*param_2 = (undefined1)param_1;
    local_8 = param_1 & 0xff;
    *param_2 = *param_2 + 1;
  }
  if (local_8 == 0xffffffff) {
    *param_3 = -1;
  }
  else {
    *param_3 = *param_3 + 1;
  }
  return;
}


/*
 * FUN_1000dcb0 at 1000dcb0
 * undefined __cdecl FUN_1000dcb0(uint param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 1000dcb0-1000dce4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_1000dcb0(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    FUN_1000dc30(param_1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}


/*
 * FUN_1000dcf0 at 1000dcf0
 * undefined __cdecl FUN_1000dcf0(char * param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 1000dcf0-1000dd39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_1000dcf0(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_1000dc30((int)cVar1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}


/*
 * FUN_1000dd40 at 1000dd40
 * undefined4 __cdecl FUN_1000dd40(int * param_1)
 * Address ranges: 1000dd40-1000dd59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_1000dd40(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}


/*
 * FUN_1000dd60 at 1000dd60
 * undefined8 __cdecl FUN_1000dd60(int * param_1)
 * Address ranges: 1000dd60-1000dd7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 __cdecl FUN_1000dd60(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}


/*
 * FUN_1000dd80 at 1000dd80
 * undefined2 __cdecl FUN_1000dd80(int * param_1)
 * Address ranges: 1000dd80-1000dd9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined2 __cdecl FUN_1000dd80(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined2 *)(*param_1 + -4);
}


/*
 * FUN_1000dda0 at 1000dda0
 * undefined4 * __cdecl FUN_1000dda0(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 1000dda0-1000ddfa;1000ddfc-1000de02;1000de10-1000de38;1000de3c-1000de5e;1000de60-1000de78;1000de9c-1000dee5;1000def8-1000defe;1000df00-1000df0a;1000df0c-1000df1c;1000df20-1000df36;1000df38-1000df5d;1000df60-1000df68;1000df6c-1000df8a;1000df98-1000dfb4;1000dfb8-1000dfde;1000dfe0-1000e010;1000e034-1000e07d;1000e090-1000e096;1000e098-1000e0a4;1000e0a8-1000e0ba;1000e0bc-1000e0d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * __cdecl FUN_1000dda0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_1000df57_caseD_2;
        case 3:
          goto switchD_1000df57_caseD_3;
        }
        goto switchD_1000df57_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_1000df57_caseD_0;
      case 1:
        goto switchD_1000df57_caseD_1;
      case 2:
        goto switchD_1000df57_caseD_2;
      case 3:
        goto switchD_1000df57_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1000df57_caseD_2;
            case 3:
              goto switchD_1000df57_caseD_3;
            }
            goto switchD_1000df57_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1000df57_caseD_2;
            case 3:
              goto switchD_1000df57_caseD_3;
            }
            goto switchD_1000df57_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1000df57_caseD_2;
            case 3:
              goto switchD_1000df57_caseD_3;
            }
            goto switchD_1000df57_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_1000df57_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_1000df57_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_1000df57_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_1000df57_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_1000ddd5_caseD_2;
      case 3:
        goto switchD_1000ddd5_caseD_3;
      }
      goto switchD_1000ddd5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_1000ddd5_caseD_0;
    case 1:
      goto switchD_1000ddd5_caseD_1;
    case 2:
      goto switchD_1000ddd5_caseD_2;
    case 3:
      goto switchD_1000ddd5_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1000ddd5_caseD_2;
          case 3:
            goto switchD_1000ddd5_caseD_3;
          }
          goto switchD_1000ddd5_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1000ddd5_caseD_2;
          case 3:
            goto switchD_1000ddd5_caseD_3;
          }
          goto switchD_1000ddd5_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1000ddd5_caseD_2;
          case 3:
            goto switchD_1000ddd5_caseD_3;
          }
          goto switchD_1000ddd5_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_1000ddd5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_1000ddd5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_1000ddd5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_1000ddd5_caseD_0:
  return param_1;
}


/*
 * FUN_1000e0e0 at 1000e0e0
 * BOOL __cdecl FUN_1000e0e0(DWORD param_1, LPCSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6, int param_7)
 * Address ranges: 1000e0e0-1000e223;1000e23b-1000e29b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


BOOL __cdecl
FUN_1000e0e0(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1002cfd8;
  puStack_10 = &LAB_1000eb08;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc4;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc4;
  if (DAT_1003162c == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1003162c = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_1003162c = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (DAT_1003162c == 2) {
    if (param_6 == 0) {
      param_6 = DAT_1003163c;
    }
    BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  }
  else if (DAT_1003162c == 1) {
    if (param_5 == 0) {
      param_5 = DAT_1003164c;
    }
    iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,(LPWSTR)0x0,
                                0);
    if (iVar3 == 0) {
      BVar2 = 0;
    }
    else {
      local_8 = 0;
      FUN_10008bb0();
      local_1c = &stack0xffffffc4;
      _memset(&stack0xffffffc4,0,iVar3 << 1);
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x3c) {
        BVar2 = 0;
      }
      else {
        iVar3 = MultiByteToWideChar(param_5,1,param_2,param_3,(LPWSTR)&stack0xffffffc4,iVar3);
        if (iVar3 == 0) {
          BVar2 = 0;
        }
        else {
          BVar2 = GetStringTypeW(param_1,(LPCWSTR)&stack0xffffffc4,iVar3,param_4);
        }
      }
    }
  }
  else {
    BVar2 = 0;
  }
  ExceptionList = local_14;
  return BVar2;
}


/*
 * FUN_1000e2a0 at 1000e2a0
 * int __cdecl FUN_1000e2a0(uint param_1, int param_2)
 * Address ranges: 1000e2a0-1000e312
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_1000e2a0(uint param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((param_1 < DAT_10031bfc) &&
     ((*(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100029d0(param_1);
    iVar2 = FUN_1000e320(param_1,param_2);
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    iVar2 = -1;
  }
  return iVar2;
}


/*
 * FUN_1000e320 at 1000e320
 * int __cdecl FUN_1000e320(uint param_1, int param_2)
 * Address ranges: 1000e320-1000e54f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_1000e320(uint param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  int iVar5;
  DWORD *pDVar6;
  undefined4 *puVar7;
  HANDLE hFile;
  BOOL BVar8;
  uint local_1028;
  int local_1020;
  uint local_101c;
  char local_1008 [4064];
  undefined4 uStackY_28;
  
  FUN_10008bb0();
  local_1020 = 0;
  if (param_2 < 0) {
    uStackY_28 = 0x1000e364;
    iVar2 = FUN_10003050(2,0x1002cfe4,0x81,0,(byte *)"size >= 0");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  DVar3 = FUN_10006ab0(param_1,0,1);
  if ((DVar3 == 0xffffffff) || (DVar4 = FUN_10006ab0(param_1,0,2), DVar4 == 0xffffffff)) {
    local_1020 = -1;
  }
  else {
    local_101c = param_2 - DVar4;
    if ((int)local_101c < 1) {
      if ((int)local_101c < 0) {
        FUN_10006ab0(param_1,param_2,0);
        hFile = (HANDLE)FUN_10002850(param_1);
        BVar8 = SetEndOfFile(hFile);
        local_1020 = (BVar8 != 0) - 1;
        if (local_1020 == -1) {
          puVar7 = (undefined4 *)FUN_10006f20();
          *puVar7 = 0xd;
          DVar4 = GetLastError();
          pDVar6 = FUN_10006f30();
          *pDVar6 = DVar4;
        }
      }
    }
    else {
      _memset(local_1008,0,0x1000);
      iVar2 = FUN_1000ec60(param_1,0x8000);
      do {
        if ((int)local_101c < 0x1000) {
          local_1028 = local_101c;
        }
        else {
          local_1028 = 0x1000;
        }
        iVar5 = FUN_1000b870(param_1,local_1008,local_1028);
        if (iVar5 == -1) {
          pDVar6 = FUN_10006f30();
          if (*pDVar6 == 5) {
            puVar7 = (undefined4 *)FUN_10006f20();
            *puVar7 = 0xd;
          }
          local_1020 = -1;
          break;
        }
        local_101c = local_101c - iVar5;
      } while (0 < (int)local_101c);
      FUN_1000ec60(param_1,iVar2);
    }
    FUN_10006ab0(param_1,DVar3,0);
  }
  return local_1020;
}


/*
 * FUN_1000e550 at 1000e550
 * int __cdecl FUN_1000e550(LCID param_1, uint param_2, char * param_3, int param_4, LPWSTR param_5, int param_6, UINT param_7, int param_8)
 * Address ranges: 1000e550-1000e695;1000e6ad-1000e78b;1000e7a3-1000e854
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl
FUN_1000e550(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1002d000;
  puStack_10 = &LAB_1000eb08;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10031654 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10031654 = 2;
    }
    else {
      DAT_10031654 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_1000e860(param_3,param_4);
  }
  if (DAT_10031654 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
  }
  else if (DAT_10031654 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1003164c;
    }
    iVar2 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_10008bb0();
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x44) {
        iVar1 = 0;
      }
      else {
        iVar1 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffbc,iVar2);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffbc,iVar2,(LPWSTR)0x0,0);
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10008bb0();
            local_8 = 0xffffffff;
            if (&stack0x00000000 == (undefined1 *)0x44) {
              iVar1 = 0;
            }
            else {
              iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffbc,iVar2,
                                   (LPWSTR)&stack0xffffffbc,iVar1);
              if (iVar2 == 0) {
                iVar1 = 0;
              }
              else if (param_6 == 0) {
                iVar1 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffbc,iVar1,(LPSTR)0x0
                                            ,0,(LPCSTR)0x0,(LPBOOL)0x0);
                if (iVar1 == 0) {
                  iVar1 = 0;
                }
              }
              else {
                iVar1 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffbc,iVar1,
                                            (LPSTR)param_5,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
                if (iVar1 == 0) {
                  iVar1 = 0;
                }
              }
            }
          }
          else if (param_6 != 0) {
            if (param_6 < iVar1) {
              iVar1 = 0;
            }
            else {
              iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffbc,iVar2,param_5,param_6);
              if (iVar2 == 0) {
                iVar1 = 0;
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = 0;
  }
  ExceptionList = local_14;
  return iVar1;
}


/*
 * FUN_1000e860 at 1000e860
 * int __cdecl FUN_1000e860(char * param_1, int param_2)
 * Address ranges: 1000e860-1000e8af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_1000e860(char *param_1,int param_2)

{
  int local_c;
  char *local_8;
  
  local_c = param_2;
  for (local_8 = param_1; (local_c != 0 && (*local_8 != '\0')); local_8 = local_8 + 1) {
    local_c = local_c + -1;
  }
  if (*local_8 == '\0') {
    param_2 = (int)local_8 - (int)param_1;
  }
  return param_2;
}


/*
 * __isatty at 1000e8b0
 * int __cdecl __isatty(int _FileHandle)
 * Address ranges: 1000e8b0-1000e8e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __isatty  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2003 Debug */

int __cdecl __isatty(int _FileHandle)

{
  uint uVar1;
  
  if ((uint)_FileHandle < DAT_10031bfc) {
    uVar1 = (int)*(char *)((&DAT_10031ac0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) &
            0x40;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/*
 * FUN_1000e8f0 at 1000e8f0
 * int __cdecl FUN_1000e8f0(LPSTR param_1, undefined2 param_2)
 * Address ranges: 1000e8f0-1000e966
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_1000e8f0(LPSTR param_1,undefined2 param_2)

{
  LONG LVar1;
  undefined2 extraout_var;
  undefined2 uVar3;
  int iVar2;
  bool bVar4;
  
  LVar1 = InterlockedIncrement(&DAT_100317c4);
  bVar4 = DAT_100317b4 == 0;
  uVar3 = (short)((uint)LVar1 >> 0x10);
  if (!bVar4) {
    InterlockedDecrement(&DAT_100317c4);
    FUN_100073f0(0x13);
    uVar3 = extraout_var;
  }
  iVar2 = FUN_1000e970(param_1,CONCAT22(uVar3,param_2));
  if (bVar4) {
    InterlockedDecrement(&DAT_100317c4);
  }
  else {
    FUN_10007490(0x13);
  }
  return iVar2;
}


/*
 * FUN_1000e970 at 1000e970
 * int __cdecl FUN_1000e970(LPSTR param_1, uint param_2)
 * Address ranges: 1000e970-1000ea0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_1000e970(LPSTR param_1,uint param_2)

{
  undefined4 *puVar1;
  BOOL local_c;
  int local_8;
  
  if (param_1 == (LPSTR)0x0) {
    local_8 = 0;
  }
  else if (DAT_1003163c == 0) {
    if ((param_2 & 0xffff) < 0x100) {
      *param_1 = (CHAR)param_2;
      local_8 = 1;
    }
    else {
      puVar1 = (undefined4 *)FUN_10006f20();
      *puVar1 = 0x2a;
      local_8 = -1;
    }
  }
  else {
    local_c = 0;
    local_8 = WideCharToMultiByte(DAT_1003164c,0x220,(LPCWSTR)&param_2,1,param_1,DAT_10030214,
                                  (LPCSTR)0x0,&local_c);
    if ((local_8 == 0) || (local_c != 0)) {
      puVar1 = (undefined4 *)FUN_10006f20();
      *puVar1 = 0x2a;
      local_8 = -1;
    }
  }
  return local_8;
}


/*
 * __global_unwind2 at 1000ea10
 * undefined __cdecl __global_unwind2(PVOID param_1)
 * Address ranges: 1000ea10-1000ea2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __global_unwind2  Library: Visual Studio
 */


/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000ea28,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


/*
 * __local_unwind2 at 1000ea52
 * undefined __cdecl __local_unwind2(int param_1, int param_2)
 * Address ranges: 1000ea52-1000eab9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __local_unwind2  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_1000ea30;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_1000eae6();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}


/*
 * FUN_1000eae6 at 1000eae6
 * undefined __stdcall FUN_1000eae6(void)
 * Address ranges: 1000eae6-1000eafd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1000eae6(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_100303d0 = *(undefined4 *)(unaff_EBP + 8);
  DAT_100303cc = in_EAX;
  DAT_100303d4 = unaff_EBP;
  return;
}


/*
 * FUN_1000ebc5 at 1000ebc5
 * undefined __stdcall FUN_1000ebc5(int param_1)
 * Address ranges: 1000ebc5-1000ebdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1000ebc5(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}


/*
 * FUN_1000ebe0 at 1000ebe0
 * int __cdecl FUN_1000ebe0(uint param_1, int param_2)
 * Address ranges: 1000ebe0-1000ec52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_1000ebe0(uint param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((param_1 < DAT_10031bfc) &&
     ((*(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100029d0(param_1);
    iVar2 = FUN_1000ec60(param_1,param_2);
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    iVar2 = -1;
  }
  return iVar2;
}


/*
 * FUN_1000ec60 at 1000ec60
 * int __cdecl FUN_1000ec60(uint param_1, int param_2)
 * Address ranges: 1000ec60-1000ed2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_1000ec60(uint param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = (int)param_1 >> 5;
  cVar1 = *(char *)((&DAT_10031ac0)[iVar2] + 4 + (param_1 & 0x1f) * 0x24);
  if (param_2 == 0x8000) {
    *(byte *)((&DAT_10031ac0)[iVar2] + 4 + (param_1 & 0x1f) * 0x24) =
         *(byte *)((&DAT_10031ac0)[iVar2] + 4 + (param_1 & 0x1f) * 0x24) & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      puVar3 = (undefined4 *)FUN_10006f20();
      *puVar3 = 0x16;
      return -1;
    }
    *(byte *)((&DAT_10031ac0)[iVar2] + 4 + (param_1 & 0x1f) * 0x24) =
         *(byte *)((&DAT_10031ac0)[iVar2] + 4 + (param_1 & 0x1f) * 0x24) | 0x80;
  }
  return (-(uint)(((int)cVar1 & 0x80U) != 0) & 0xffffc000) + 0x8000;
}


/*
 * __fptrap at 1000ed30
 * void __cdecl __fptrap(void)
 * Address ranges: 1000ed30-1000ed3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __fptrap  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __fptrap
   
   Library: Visual Studio 2003 Debug */

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}


/*
 * FUN_1000ed40 at 1000ed40
 * uint * __cdecl FUN_1000ed40(int param_1, uint * param_2)
 * Address ranges: 1000ed40-1000f12e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint * __cdecl FUN_1000ed40(int param_1,uint *param_2)

{
  byte *pbVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  uint *local_b4;
  uint *local_b0;
  uint *local_ac;
  uint *local_a0;
  uint local_9c [33];
  int local_18;
  int local_14;
  int local_10;
  uint *local_c;
  int local_8;
  
  if ((param_1 < 0) || (5 < param_1)) {
    local_c = (uint *)0x0;
  }
  else {
    FUN_100073f0(0x13);
    local_8 = 1;
    DAT_100317b4 = DAT_100317b4 + 1;
    while (DAT_100317c4 != 0) {
      Sleep(1);
    }
    if (param_1 == 0) {
      local_18 = 1;
      local_10 = 0;
      if (param_2 == (uint *)0x0) {
        local_c = FUN_1000f2d0();
      }
      else if ((((char)*param_2 == 'L') && (*(char *)((int)param_2 + 1) == 'C')) &&
              (*(char *)((int)param_2 + 2) == '_')) {
        local_a0 = param_2;
        do {
          pbVar1 = FUN_10010d60((byte *)local_a0,&DAT_1002d05c);
          if (((pbVar1 == (byte *)0x0) || (sVar4 = (int)pbVar1 - (int)local_a0, sVar4 == 0)) ||
             (*pbVar1 == 0x3b)) {
            if (local_8 != 0) {
              FUN_10007490(0x13);
              DAT_100317b4 = DAT_100317b4 + -1;
            }
            return (uint *)0x0;
          }
          local_14 = 1;
          while ((local_14 < 6 &&
                 ((iVar2 = _strncmp(*(char **)(local_14 * 0xc + 0x100304e8),(char *)local_a0,sVar4),
                  iVar2 != 0 ||
                  (sVar3 = _strlen(*(char **)(local_14 * 0xc + 0x100304e8)), sVar4 != sVar3))))) {
            local_14 = local_14 + 1;
          }
          pbVar1 = pbVar1 + 1;
          sVar4 = FUN_10010ce0(pbVar1,&DAT_1002d058);
          if ((sVar4 == 0) && (*pbVar1 != 0x3b)) {
            if (local_8 != 0) {
              FUN_10007490(0x13);
              DAT_100317b4 = DAT_100317b4 + -1;
            }
            return (uint *)0x0;
          }
          if (local_14 < 6) {
            _strncpy((char *)local_9c,(char *)pbVar1,sVar4);
            *(undefined1 *)((int)local_9c + sVar4) = 0;
            iVar2 = FUN_1000f130(local_14,local_9c);
            if (iVar2 != 0) {
              local_10 = local_10 + 1;
            }
          }
          local_a0 = (uint *)(pbVar1 + sVar4);
          if ((byte)*local_a0 != 0) {
            local_a0 = (uint *)((int)local_a0 + 1);
          }
        } while ((byte)*local_a0 != 0);
        if (local_10 == 0) {
          local_b0 = (uint *)0x0;
        }
        else {
          local_b0 = FUN_1000f2d0();
        }
        local_c = local_b0;
      }
      else {
        local_c = FUN_1000f3d0(param_2,local_9c,(undefined4 *)0x0,(undefined4 *)0x0);
        if (local_c != (uint *)0x0) {
          for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
            if (local_14 != 0) {
              iVar2 = _strcmp((char *)local_9c,(&DAT_100304ec)[local_14 * 3]);
              if (iVar2 == 0) {
                local_10 = local_10 + 1;
              }
              else {
                iVar2 = FUN_1000f130(local_14,local_9c);
                if (iVar2 == 0) {
                  local_18 = 0;
                }
                else {
                  local_10 = local_10 + 1;
                }
              }
            }
          }
          if (local_18 == 0) {
            if (local_10 == 0) {
              local_b4 = (uint *)0x0;
            }
            else {
              local_b4 = FUN_1000f2d0();
            }
            local_c = local_b4;
          }
          else {
            local_c = FUN_1000f2d0();
            FUN_100041a0(DAT_100304ec,2);
            DAT_100304ec = (void *)0x0;
          }
        }
      }
    }
    else {
      if (param_2 == (uint *)0x0) {
        local_ac = (&DAT_100304ec)[param_1 * 3];
      }
      else {
        local_ac = (uint *)FUN_1000f130(param_1,param_2);
      }
      local_c = local_ac;
    }
    if (local_8 != 0) {
      FUN_10007490(0x13);
      DAT_100317b4 = DAT_100317b4 + -1;
    }
  }
  return local_c;
}


/*
 * FUN_1000f130 at 1000f130
 * undefined4 __cdecl FUN_1000f130(int param_1, uint * param_2)
 * Address ranges: 1000f130-1000f2c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000f130(int param_1,uint *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  size_t sVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint local_ac [2];
  undefined4 local_a4;
  uint local_a0 [33];
  undefined4 local_1c;
  undefined4 local_18 [2];
  undefined *local_10;
  uint *local_c;
  undefined4 local_8;
  
  puVar1 = FUN_1000f3d0(param_2,local_a0,local_ac,&local_a4);
  if (puVar1 == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar6 = 0x132;
    pcVar5 = "setlocal.c";
    uVar4 = 2;
    sVar3 = _strlen((char *)local_a0);
    local_c = (uint *)FUN_10003710((void *)(sVar3 + 1),uVar4,(int)pcVar5,iVar6);
    if (local_c == (uint *)0x0) {
      uVar2 = 0;
    }
    else {
      local_10 = (undefined *)(&DAT_100304ec)[param_1 * 3];
      local_8 = *(undefined4 *)(&DAT_10031634 + param_1 * 4);
      FUN_100061d0(local_18,(undefined4 *)(&DAT_10031680 + param_1 * 6),6);
      local_1c = DAT_1003164c;
      puVar1 = FUN_10001ec0(local_c,local_a0);
      (&DAT_100304ec)[param_1 * 3] = puVar1;
      *(uint *)(&DAT_10031634 + param_1 * 4) = local_ac[0] & 0xffff;
      FUN_100061d0((undefined4 *)(&DAT_10031680 + param_1 * 6),local_ac,6);
      if (param_1 == 2) {
        DAT_1003164c = local_a4;
      }
      if (param_1 == 1) {
        _DAT_10031650 = local_a4;
      }
      iVar6 = (**(code **)(&DAT_100304f0 + param_1 * 0xc))();
      if (iVar6 == 0) {
        if (local_10 != &DAT_100303d8) {
          FUN_100041a0(local_10,2);
        }
        uVar2 = (&DAT_100304ec)[param_1 * 3];
      }
      else {
        (&DAT_100304ec)[param_1 * 3] = local_10;
        FUN_100041a0(local_c,2);
        *(undefined4 *)(&DAT_10031634 + param_1 * 4) = local_8;
        DAT_1003164c = local_1c;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


/*
 * FUN_1000f2d0 at 1000f2d0
 * uint * __stdcall FUN_1000f2d0(void)
 * Address ranges: 1000f2d0-1000f3cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint * FUN_1000f2d0(void)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int local_8;
  
  bVar1 = true;
  if (DAT_100304ec == (uint *)0x0) {
    DAT_100304ec = (uint *)FUN_10003710((void *)0x351,2,0x1002d060,0x167);
  }
  *(undefined1 *)DAT_100304ec = 0;
  for (local_8 = 1; __strcats(DAT_100304ec,3), local_8 < 5; local_8 = local_8 + 1) {
    FUN_10001ed0(DAT_100304ec,(uint *)&DAT_1002d058);
    iVar2 = _strcmp((char *)(&DAT_100304ec)[local_8 * 3],(char *)(&DAT_100304ec)[(local_8 + 1) * 3])
    ;
    if (iVar2 != 0) {
      bVar1 = false;
    }
  }
  puVar3 = DAT_100304ec;
  if (bVar1) {
    FUN_100041a0(DAT_100304ec,2);
    DAT_100304ec = (uint *)0x0;
    puVar3 = (uint *)PTR_DAT_10030504;
  }
  return puVar3;
}


/*
 * FUN_1000f3d0 at 1000f3d0
 * uint * __cdecl FUN_1000f3d0(uint * param_1, uint * param_2, undefined4 * param_3, undefined4 * param_4)
 * Address ranges: 1000f3d0-1000f553
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_1000f3d0(uint *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  uint local_8c [34];
  
  if (param_1 == (uint *)0x0) {
    param_2 = (uint *)0x0;
  }
  else if (((char)*param_1 == 'C') && (*(char *)((int)param_1 + 1) == '\0')) {
    *(undefined1 *)param_2 = 0x43;
    *(undefined1 *)((int)param_2 + 1) = 0;
    if (param_3 != (undefined4 *)0x0) {
      *(undefined2 *)param_3 = 0;
      *(undefined2 *)((int)param_3 + 2) = 0;
      *(undefined2 *)(param_3 + 1) = 0;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    iVar1 = _strcmp(&DAT_10030460,(char *)param_1);
    if ((iVar1 != 0) && (iVar1 = _strcmp(&DAT_100303dc,(char *)param_1), iVar1 != 0)) {
      iVar1 = FUN_1000f5c0((char *)local_8c,(byte *)param_1);
      if (iVar1 != 0) {
        return (uint *)0x0;
      }
      iVar1 = FUN_10010da0((char *)local_8c,(undefined2 *)&DAT_10031658,(int)local_8c);
      if (iVar1 == 0) {
        return (uint *)0x0;
      }
      _DAT_10031660 = (uint)DAT_1003165c;
      ___lc_lctostr((uint *)&DAT_10030460,local_8c);
      if ((char)*param_1 == '\0') {
        FUN_10001ec0((uint *)&DAT_100303dc,(uint *)&DAT_10030460);
      }
      else {
        FUN_10001ec0((uint *)&DAT_100303dc,param_1);
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      FUN_100061d0(param_3,(undefined4 *)&DAT_10031658,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_100061d0(param_4,(undefined4 *)&DAT_10031660,4);
    }
    FUN_10001ec0(param_2,(uint *)&DAT_10030460);
    param_2 = (uint *)&DAT_10030460;
  }
  return param_2;
}


/*
 * FUN_1000f560 at 1000f560
 * undefined4 __stdcall FUN_1000f560(void)
 * Address ranges: 1000f560-1000f566
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1000f560(void)

{
  return 0;
}


/*
 * __strcats at 1000f570
 * undefined __cdecl __strcats(uint * param_1, int param_2)
 * Address ranges: 1000f570-1000f5be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __strcats  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __strcats
   
   Library: Visual Studio 2003 Debug */

void __cdecl __strcats(uint *param_1,int param_2)

{
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)&stack0x0000000c;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    FUN_10001ed0(param_1,(uint *)*local_8);
    local_8 = local_8 + 1;
  }
  return;
}


/*
 * FUN_1000f5c0 at 1000f5c0
 * undefined4 __cdecl FUN_1000f5c0(char * param_1, byte * param_2)
 * Address ranges: 1000f5c0-1000f71c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_1000f5c0(char *param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  size_t _Count;
  int local_8;
  
  _memset(param_1,0,0x88);
  if (*param_2 == 0) {
    uVar2 = 0;
  }
  else if ((*param_2 == 0x2e) && (param_2[1] != 0)) {
    FUN_10001ec0((uint *)(param_1 + 0x80),(uint *)(param_2 + 1));
    uVar2 = 0;
  }
  else {
    local_8 = 0;
    while (_Count = FUN_10010ce0(param_2,&DAT_1002d070), _Count != 0) {
      bVar1 = param_2[_Count];
      if (((local_8 == 0) && ((int)_Count < 0x40)) && (bVar1 != 0x2e)) {
        _strncpy(param_1,(char *)param_2,_Count);
      }
      else if (((local_8 == 1) && ((int)_Count < 0x40)) && (bVar1 != 0x5f)) {
        _strncpy(param_1 + 0x40,(char *)param_2,_Count);
      }
      else {
        if ((local_8 != 2) || ((bVar1 != 0 && (bVar1 != 0x2c)))) {
          return 0xffffffff;
        }
        _strncpy(param_1 + 0x80,(char *)param_2,_Count);
      }
      if ((bVar1 == 0x2c) || (bVar1 == 0)) {
        return 0;
      }
      param_2 = param_2 + _Count + 1;
      local_8 = local_8 + 1;
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/*
 * ___lc_lctostr at 1000f720
 * undefined __cdecl ___lc_lctostr(uint * param_1, uint * param_2)
 * Address ranges: 1000f720-1000f784
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  ___lc_lctostr  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    ___lc_lctostr
   
   Library: Visual Studio 2003 Debug */

void __cdecl ___lc_lctostr(uint *param_1,uint *param_2)

{
  FUN_10001ec0(param_1,param_2);
  if ((char)param_2[0x10] != '\0') {
    __strcats(param_1,2);
  }
  if ((char)param_2[0x20] != '\0') {
    __strcats(param_1,2);
  }
  return;
}


/*
 * ___init_time at 1000f790
 * int __cdecl ___init_time(threadlocinfo * _LocInfo)
 * Address ranges: 1000f790-1000f86a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  ___init_time  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2003 Debug */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_10031648 == 0) {
    PTR_PTR_10030ca8 = (undefined *)&PTR_DAT_10030cb0;
    ___free_lc_time(DAT_10031664);
    FUN_100041a0(DAT_10031664,2);
    DAT_10031664 = (int *)0x0;
    iVar2 = 0;
  }
  else {
    piVar1 = (int *)__calloc_dbg(1,0xac,2,"inittime.c",0x48);
    if (piVar1 == (int *)0x0) {
      iVar2 = 1;
    }
    else {
      uVar3 = FUN_1000f870(piVar1);
      if (uVar3 == 0) {
        PTR_PTR_10030ca8 = (undefined *)piVar1;
        ___free_lc_time(DAT_10031664);
        FUN_100041a0(DAT_10031664,2);
        iVar2 = 0;
        DAT_10031664 = piVar1;
      }
      else {
        ___free_lc_time(piVar1);
        FUN_100041a0(piVar1,2);
        iVar2 = 1;
      }
    }
  }
  return iVar2;
}


/*
 * FUN_1000f870 at 1000f870
 * uint __cdecl FUN_1000f870(int * param_1)
 * Address ranges: 1000f870-1000fdfe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_1000f870(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  
  uVar41 = (uint)DAT_1003169e;
  uVar1 = (uint)DAT_100316a0;
  if (param_1 == (int *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = FUN_10012fb0(1,uVar41,0x31,param_1 + 1);
    uVar3 = FUN_10012fb0(1,uVar41,0x32,param_1 + 2);
    uVar4 = FUN_10012fb0(1,uVar41,0x33,param_1 + 3);
    uVar5 = FUN_10012fb0(1,uVar41,0x34,param_1 + 4);
    uVar6 = FUN_10012fb0(1,uVar41,0x35,param_1 + 5);
    uVar7 = FUN_10012fb0(1,uVar41,0x36,param_1 + 6);
    uVar8 = FUN_10012fb0(1,uVar41,0x37,param_1);
    uVar9 = FUN_10012fb0(1,uVar41,0x2a,param_1 + 8);
    uVar10 = FUN_10012fb0(1,uVar41,0x2b,param_1 + 9);
    uVar11 = FUN_10012fb0(1,uVar41,0x2c,param_1 + 10);
    uVar12 = FUN_10012fb0(1,uVar41,0x2d,param_1 + 0xb);
    uVar13 = FUN_10012fb0(1,uVar41,0x2e,param_1 + 0xc);
    uVar14 = FUN_10012fb0(1,uVar41,0x2f,param_1 + 0xd);
    uVar15 = FUN_10012fb0(1,uVar41,0x30,param_1 + 7);
    uVar16 = FUN_10012fb0(1,uVar41,0x44,param_1 + 0xe);
    uVar17 = FUN_10012fb0(1,uVar41,0x45,param_1 + 0xf);
    uVar18 = FUN_10012fb0(1,uVar41,0x46,param_1 + 0x10);
    uVar19 = FUN_10012fb0(1,uVar41,0x47,param_1 + 0x11);
    uVar20 = FUN_10012fb0(1,uVar41,0x48,param_1 + 0x12);
    uVar21 = FUN_10012fb0(1,uVar41,0x49,param_1 + 0x13);
    uVar22 = FUN_10012fb0(1,uVar41,0x4a,param_1 + 0x14);
    uVar23 = FUN_10012fb0(1,uVar41,0x4b,param_1 + 0x15);
    uVar24 = FUN_10012fb0(1,uVar41,0x4c,param_1 + 0x16);
    uVar25 = FUN_10012fb0(1,uVar41,0x4d,param_1 + 0x17);
    uVar26 = FUN_10012fb0(1,uVar41,0x4e,param_1 + 0x18);
    uVar27 = FUN_10012fb0(1,uVar41,0x4f,param_1 + 0x19);
    uVar28 = FUN_10012fb0(1,uVar41,0x38,param_1 + 0x1a);
    uVar29 = FUN_10012fb0(1,uVar41,0x39,param_1 + 0x1b);
    uVar30 = FUN_10012fb0(1,uVar41,0x3a,param_1 + 0x1c);
    uVar31 = FUN_10012fb0(1,uVar41,0x3b,param_1 + 0x1d);
    uVar32 = FUN_10012fb0(1,uVar41,0x3c,param_1 + 0x1e);
    uVar33 = FUN_10012fb0(1,uVar41,0x3d,param_1 + 0x1f);
    uVar34 = FUN_10012fb0(1,uVar41,0x3e,param_1 + 0x20);
    uVar35 = FUN_10012fb0(1,uVar41,0x3f,param_1 + 0x21);
    uVar36 = FUN_10012fb0(1,uVar41,0x40,param_1 + 0x22);
    uVar37 = FUN_10012fb0(1,uVar41,0x41,param_1 + 0x23);
    uVar38 = FUN_10012fb0(1,uVar41,0x42,param_1 + 0x24);
    uVar39 = FUN_10012fb0(1,uVar41,0x43,param_1 + 0x25);
    uVar40 = FUN_10012fb0(1,uVar41,0x28,param_1 + 0x26);
    uVar41 = FUN_10012fb0(1,uVar41,0x29,param_1 + 0x27);
    uVar42 = FUN_10012fb0(1,uVar1,0x1f,param_1 + 0x28);
    uVar43 = FUN_10012fb0(1,uVar1,0x20,param_1 + 0x29);
    uVar1 = FUN_10012fb0(1,uVar1,0x1003,param_1 + 0x2a);
    uVar1 = uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12
            | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 |
            uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31
            | uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 |
            uVar41 | uVar42 | uVar43 | uVar1;
  }
  return uVar1;
}


/*
 * ___free_lc_time at 1000fe00
 * undefined __cdecl ___free_lc_time(undefined4 * param_1)
 * Address ranges: 1000fe00-1001010a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  ___free_lc_time  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2003 Debug */

void __cdecl ___free_lc_time(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_100041a0((void *)param_1[1],2);
    FUN_100041a0((void *)param_1[2],2);
    FUN_100041a0((void *)param_1[3],2);
    FUN_100041a0((void *)param_1[4],2);
    FUN_100041a0((void *)param_1[5],2);
    FUN_100041a0((void *)param_1[6],2);
    FUN_100041a0((void *)*param_1,2);
    FUN_100041a0((void *)param_1[8],2);
    FUN_100041a0((void *)param_1[9],2);
    FUN_100041a0((void *)param_1[10],2);
    FUN_100041a0((void *)param_1[0xb],2);
    FUN_100041a0((void *)param_1[0xc],2);
    FUN_100041a0((void *)param_1[0xd],2);
    FUN_100041a0((void *)param_1[7],2);
    FUN_100041a0((void *)param_1[0xe],2);
    FUN_100041a0((void *)param_1[0xf],2);
    FUN_100041a0((void *)param_1[0x10],2);
    FUN_100041a0((void *)param_1[0x11],2);
    FUN_100041a0((void *)param_1[0x12],2);
    FUN_100041a0((void *)param_1[0x13],2);
    FUN_100041a0((void *)param_1[0x14],2);
    FUN_100041a0((void *)param_1[0x15],2);
    FUN_100041a0((void *)param_1[0x16],2);
    FUN_100041a0((void *)param_1[0x17],2);
    FUN_100041a0((void *)param_1[0x18],2);
    FUN_100041a0((void *)param_1[0x19],2);
    FUN_100041a0((void *)param_1[0x1a],2);
    FUN_100041a0((void *)param_1[0x1b],2);
    FUN_100041a0((void *)param_1[0x1c],2);
    FUN_100041a0((void *)param_1[0x1d],2);
    FUN_100041a0((void *)param_1[0x1e],2);
    FUN_100041a0((void *)param_1[0x1f],2);
    FUN_100041a0((void *)param_1[0x20],2);
    FUN_100041a0((void *)param_1[0x21],2);
    FUN_100041a0((void *)param_1[0x22],2);
    FUN_100041a0((void *)param_1[0x23],2);
    FUN_100041a0((void *)param_1[0x24],2);
    FUN_100041a0((void *)param_1[0x25],2);
    FUN_100041a0((void *)param_1[0x26],2);
    FUN_100041a0((void *)param_1[0x27],2);
    FUN_100041a0((void *)param_1[0x28],2);
    FUN_100041a0((void *)param_1[0x29],2);
    FUN_100041a0((void *)param_1[0x2a],2);
  }
  return;
}


/*
 * FUN_10010110 at 10010110
 * undefined4 __stdcall FUN_10010110(void)
 * Address ranges: 10010110-100103b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10010110(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = (uint)DAT_1003169a;
  if (DAT_10031644 == 0) {
    FUN_100041a0(DAT_10031668,2);
    FUN_100041a0(DAT_1003166c,2);
    FUN_100041a0(DAT_10031670,2);
    DAT_10031668 = (void *)0x0;
    DAT_1003166c = (void *)0x0;
    DAT_10031670 = (char *)0x0;
    uVar5 = FUN_10003710((void *)0x2,2,0x1002d088,0x88);
    *(undefined4 *)PTR_PTR_10030d98 = uVar5;
    if (*(int *)PTR_PTR_10030d98 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      FUN_10001ec0(*(uint **)PTR_PTR_10030d98,(uint *)&DAT_1002d074);
      uVar5 = FUN_10003710((void *)0x2,2,0x1002d088,0x8d);
      *(undefined4 *)(PTR_PTR_10030d98 + 4) = uVar5;
      if (*(int *)(PTR_PTR_10030d98 + 4) == 0) {
        uVar5 = 0xffffffff;
      }
      else {
        **(undefined1 **)(PTR_PTR_10030d98 + 4) = 0;
        uVar5 = FUN_10003710((void *)0x2,2,0x1002d088,0x92);
        *(undefined4 *)(PTR_PTR_10030d98 + 8) = uVar5;
        if (*(int *)(PTR_PTR_10030d98 + 8) == 0) {
          uVar5 = 0xffffffff;
        }
        else {
          **(undefined1 **)(PTR_PTR_10030d98 + 8) = 0;
          DAT_10030218 = **(undefined1 **)PTR_PTR_10030d98;
          _DAT_1003021c = 1;
          uVar5 = 0;
        }
      }
    }
  }
  else {
    iVar2 = FUN_10012fb0(1,uVar1,0xe,(int *)&DAT_10031668);
    iVar3 = FUN_10012fb0(1,uVar1,0xf,(int *)&DAT_1003166c);
    iVar4 = FUN_10012fb0(1,uVar1,0x10,(int *)&DAT_10031670);
    fix_grouping(DAT_10031670);
    if ((iVar2 == 0 && iVar3 == 0) && iVar4 == 0) {
      if (*(undefined **)PTR_PTR_10030d98 != &DAT_10030d60) {
        FUN_100041a0(*(void **)PTR_PTR_10030d98,2);
        FUN_100041a0(*(void **)(PTR_PTR_10030d98 + 4),2);
        FUN_100041a0(*(void **)(PTR_PTR_10030d98 + 8),2);
      }
      *(void **)PTR_PTR_10030d98 = DAT_10031668;
      *(void **)(PTR_PTR_10030d98 + 4) = DAT_1003166c;
      *(char **)(PTR_PTR_10030d98 + 8) = DAT_10031670;
      DAT_10030218 = **(undefined1 **)PTR_PTR_10030d98;
      _DAT_1003021c = 1;
      uVar5 = 0;
    }
    else {
      FUN_100041a0(DAT_10031668,2);
      FUN_100041a0(DAT_1003166c,2);
      FUN_100041a0(DAT_10031670,2);
      DAT_10031668 = (void *)0x0;
      DAT_1003166c = (void *)0x0;
      DAT_10031670 = (char *)0x0;
      uVar5 = 0xffffffff;
    }
  }
  return uVar5;
}


/*
 * fix_grouping at 100103c0
 * undefined __cdecl fix_grouping(char * param_1)
 * Address ranges: 100103c0-1001043c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _fix_grouping  Library: Visual Studio
 */


/* Library Function - Single Match
    _fix_grouping
   
   Library: Visual Studio */

void __cdecl fix_grouping(char *param_1)

{
  char *local_8;
  
  while (*param_1 != '\0') {
    if ((*param_1 < '0') || ('9' < *param_1)) {
      if (*param_1 == ';') {
        local_8 = param_1;
        do {
          *local_8 = local_8[1];
          local_8 = local_8 + 1;
        } while (*local_8 != '\0');
      }
      else {
        param_1 = param_1 + 1;
      }
    }
    else {
      *param_1 = *param_1 + -0x30;
      param_1 = param_1 + 1;
    }
  }
  return;
}


/*
 * FUN_10010440 at 10010440
 * undefined4 __stdcall FUN_10010440(void)
 * Address ranges: 10010440-1001056f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10010440(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (DAT_10031640 == 0) {
    PTR_DAT_10030d68 = *(undefined **)PTR_PTR_10030d98;
    PTR_DAT_10030d6c = *(undefined **)(PTR_PTR_10030d98 + 4);
    PTR_DAT_10030d70 = *(undefined **)(PTR_PTR_10030d98 + 8);
    PTR_PTR_10030d98 = (undefined *)&PTR_DAT_10030d68;
    FUN_10010800((int)DAT_10031674);
    FUN_100041a0(DAT_10031674,2);
    DAT_10031674 = (undefined4 *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined4 *)__calloc_dbg(1,0x30,2,"initmon.c",0x4a);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 1;
    }
    else {
      uVar3 = FUN_10010570((int)puVar1);
      if (uVar3 == 0) {
        *puVar1 = *(undefined4 *)PTR_PTR_10030d98;
        puVar1[1] = *(undefined4 *)(PTR_PTR_10030d98 + 4);
        puVar1[2] = *(undefined4 *)(PTR_PTR_10030d98 + 8);
        PTR_PTR_10030d98 = (undefined *)puVar1;
        FUN_10010800((int)DAT_10031674);
        FUN_100041a0(DAT_10031674,2);
        uVar2 = 0;
        DAT_10031674 = puVar1;
      }
      else {
        FUN_10010800((int)puVar1);
        FUN_100041a0(puVar1,2);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


/*
 * FUN_10010570 at 10010570
 * uint __cdecl FUN_10010570(int param_1)
 * Address ranges: 10010570-1001077c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_10010570(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar1 = (uint)DAT_10031694;
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = FUN_10012fb0(1,uVar1,0x15,(int *)(param_1 + 0xc));
    uVar3 = FUN_10012fb0(1,uVar1,0x14,(int *)(param_1 + 0x10));
    uVar4 = FUN_10012fb0(1,uVar1,0x16,(int *)(param_1 + 0x14));
    uVar5 = FUN_10012fb0(1,uVar1,0x17,(int *)(param_1 + 0x18));
    uVar6 = FUN_10012fb0(1,uVar1,0x18,(int *)(param_1 + 0x1c));
    fix_grouping(*(char **)(param_1 + 0x1c));
    uVar7 = FUN_10012fb0(1,uVar1,0x50,(int *)(param_1 + 0x20));
    uVar8 = FUN_10012fb0(1,uVar1,0x51,(int *)(param_1 + 0x24));
    uVar9 = FUN_10012fb0(0,uVar1,0x1a,(int *)(param_1 + 0x28));
    uVar10 = FUN_10012fb0(0,uVar1,0x19,(int *)(param_1 + 0x29));
    uVar11 = FUN_10012fb0(0,uVar1,0x54,(int *)(param_1 + 0x2a));
    uVar12 = FUN_10012fb0(0,uVar1,0x55,(int *)(param_1 + 0x2b));
    uVar13 = FUN_10012fb0(0,uVar1,0x56,(int *)(param_1 + 0x2c));
    uVar14 = FUN_10012fb0(0,uVar1,0x57,(int *)(param_1 + 0x2d));
    uVar15 = FUN_10012fb0(0,uVar1,0x52,(int *)(param_1 + 0x2e));
    uVar1 = FUN_10012fb0(0,uVar1,0x53,(int *)(param_1 + 0x2f));
    uVar1 = uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12
            | uVar13 | uVar14 | uVar15 | uVar1;
  }
  return uVar1;
}


/*
 * fix_grouping at 10010780
 * undefined __cdecl fix_grouping(char * param_1)
 * Address ranges: 10010780-100107fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _fix_grouping  Library: Visual Studio
 */


/* Library Function - Single Match
    _fix_grouping
   
   Library: Visual Studio */

void __cdecl fix_grouping(char *param_1)

{
  char *local_8;
  
  while (*param_1 != '\0') {
    if ((*param_1 < '0') || ('9' < *param_1)) {
      if (*param_1 == ';') {
        local_8 = param_1;
        do {
          *local_8 = local_8[1];
          local_8 = local_8 + 1;
        } while (*local_8 != '\0');
      }
      else {
        param_1 = param_1 + 1;
      }
    }
    else {
      *param_1 = *param_1 + -0x30;
      param_1 = param_1 + 1;
    }
  }
  return;
}


/*
 * FUN_10010800 at 10010800
 * undefined __cdecl FUN_10010800(int param_1)
 * Address ranges: 10010800-10010892
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10010800(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_100316d0)) {
    FUN_100041a0(*(void **)(param_1 + 0xc),2);
    FUN_100041a0(*(void **)(param_1 + 0x10),2);
    FUN_100041a0(*(void **)(param_1 + 0x14),2);
    FUN_100041a0(*(void **)(param_1 + 0x18),2);
    FUN_100041a0(*(void **)(param_1 + 0x1c),2);
    FUN_100041a0(*(void **)(param_1 + 0x20),2);
    FUN_100041a0(*(void **)(param_1 + 0x24),2);
  }
  return;
}


/*
 * FUN_100108a0 at 100108a0
 * undefined4 __stdcall FUN_100108a0(void)
 * Address ranges: 100108a0-10010c3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_100108a0(void)

{
  int iVar1;
  BOOL BVar2;
  undefined4 uVar3;
  undefined2 *local_34;
  LPCSTR local_30;
  LPCWSTR local_2c;
  LPCWSTR local_28;
  uint local_24;
  undefined2 *local_20;
  BYTE *local_1c;
  _cpinfo local_18;
  
  local_30 = (LPCSTR)0x0;
  local_2c = (LPCWSTR)0x0;
  if (DAT_1003163c == 0) {
    PTR_DAT_10030008 = &DAT_10030012;
    PTR_DAT_1003000c = &DAT_10030012;
    FUN_100041a0(DAT_10031678,2);
    FUN_100041a0(DAT_1003167c,2);
    DAT_10031678 = (void *)0x0;
    DAT_1003167c = (void *)0x0;
    uVar3 = 0;
  }
  else {
    if ((DAT_1003164c != 0) ||
       (iVar1 = FUN_10012fb0(0,(uint)DAT_1003168c,0x1004,(int *)&DAT_1003164c), iVar1 == 0)) {
      local_34 = (undefined2 *)FUN_10003710((void *)0x202,2,0x1002d0a0,0x5c);
      local_20 = (undefined2 *)FUN_10003710((void *)0x202,2,0x1002d0a0,0x5e);
      local_30 = (LPCSTR)FUN_10003710((void *)0x101,2,0x1002d0a0,0x60);
      local_2c = (LPCWSTR)FUN_10003710((void *)0x202,2,0x1002d0a0,0x62);
      if ((local_34 != (undefined2 *)0x0) &&
         (((local_20 != (undefined2 *)0x0 && (local_30 != (LPCSTR)0x0)) &&
          (local_2c != (LPCWSTR)0x0)))) {
        local_1c = (BYTE *)local_30;
        for (local_24 = 0; (int)local_24 < 0x100; local_24 = local_24 + 1) {
          *local_1c = (CHAR)local_24;
          local_1c = local_1c + 1;
        }
        BVar2 = GetCPInfo(DAT_1003164c,&local_18);
        if ((BVar2 != 0) && (local_18.MaxCharSize < 3)) {
          DAT_10030214 = local_18.MaxCharSize & 0xffff;
          if (1 < DAT_10030214) {
            for (local_1c = local_18.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                local_1c = local_1c + 2) {
              for (local_24 = (uint)*local_1c; (int)local_24 <= (int)(uint)local_1c[1];
                  local_24 = local_24 + 1) {
                local_30[local_24] = '\0';
              }
            }
          }
          BVar2 = FUN_1000e0e0(1,local_30,0x100,local_34 + 1,0,0,0);
          if (BVar2 != 0) {
            *local_34 = 0;
            local_28 = local_2c;
            for (local_24 = 0; (int)local_24 < 0x100; local_24 = local_24 + 1) {
              *local_28 = (WCHAR)local_24;
              local_28 = local_28 + 1;
            }
            BVar2 = FUN_10013250(1,local_2c,0x100,local_20 + 1,0,0);
            if (BVar2 != 0) {
              *local_20 = 0;
              if (1 < (int)DAT_10030214) {
                for (local_1c = local_18.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                    local_1c = local_1c + 2) {
                  for (local_24 = (uint)*local_1c; (int)local_24 <= (int)(uint)local_1c[1];
                      local_24 = local_24 + 1) {
                    local_34[local_24 + 1] = 0x8000;
                  }
                }
              }
              PTR_DAT_10030008 = (undefined *)(local_34 + 1);
              PTR_DAT_1003000c = (undefined *)(local_20 + 1);
              if (DAT_10031678 != (void *)0x0) {
                FUN_100041a0(DAT_10031678,2);
              }
              DAT_10031678 = local_34;
              if (DAT_1003167c != (void *)0x0) {
                FUN_100041a0(DAT_1003167c,2);
              }
              DAT_1003167c = local_20;
              FUN_100041a0(local_30,2);
              FUN_100041a0(local_2c,2);
              return 0;
            }
          }
        }
      }
    }
    FUN_100041a0(local_34,2);
    FUN_100041a0(local_20,2);
    FUN_100041a0(local_30,2);
    FUN_100041a0(local_2c,2);
    uVar3 = 1;
  }
  return uVar3;
}


/*
 * FUN_10010c40 at 10010c40
 * undefined4 __stdcall FUN_10010c40(void)
 * Address ranges: 10010c40-10010c46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10010c40(void)

{
  return 0;
}


/*
 * _strcmp at 10010c50
 * int __cdecl _strcmp(char * _Str1, char * _Str2)
 * Address ranges: 10010c50-10010c92;10010c94-10010c99;10010c9c-10010cd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _strcmp  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _strcmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar5 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_10010c94;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_10010c60;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_10010c94;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_10010c94;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_10010c60:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < (byte)_Str2[2];
    if (bVar4 != _Str2[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < (byte)_Str2[3];
    if (bVar3 != _Str2[3]) break;
    _Str2 = _Str2 + 4;
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_10010c94:
  return (uint)bVar5 * -2 + 1;
}


/*
 * FUN_10010ce0 at 10010ce0
 * int __cdecl FUN_10010ce0(byte * param_1, byte * param_2)
 * Address ranges: 10010ce0-10010d1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10010ce0(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  iVar2 = -1;
  do {
    iVar2 = iVar2 + 1;
    bVar1 = *param_1;
    if (bVar1 == 0) {
      return iVar2;
    }
    param_1 = param_1 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return iVar2;
}


/*
 * _strncmp at 10010d20
 * int __cdecl _strncmp(char * _Str1, char * _Str2, size_t _MaxCount)
 * Address ranges: 10010d20-10010d57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _strncmp  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _strncmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar5 = 0;
  sVar3 = _MaxCount;
  pcVar6 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = _MaxCount - sVar3;
    do {
      pcVar6 = _Str2;
      pcVar7 = _Str1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = _Str1 + 1;
      pcVar6 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar6;
      _Str1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    uVar5 = ~uVar5;
  }
  return uVar5;
}


/*
 * FUN_10010d60 at 10010d60
 * byte * __cdecl FUN_10010d60(byte * param_1, byte * param_2)
 * Address ranges: 10010d60-10010d99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


byte * __cdecl FUN_10010d60(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = param_1;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (byte *)0x0;
    }
    param_1 = pbVar2 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return pbVar2;
}


/*
 * FUN_10010da0 at 10010da0
 * undefined4 __cdecl FUN_10010da0(char * param_1, undefined2 * param_2, int param_3)
 * Address ranges: 10010da0-10010f9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10010da0(char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint _Value;
  BOOL BVar3;
  code *local_c;
  undefined2 local_8;
  
  if (DAT_100316c4 == (code *)0x0) {
    iVar1 = FUN_10011870();
    if (iVar1 == 0) {
      local_c = crtGetLocaleInfoA;
    }
    else {
      local_c = GetLocaleInfoA_exref;
    }
    DAT_100316c4 = local_c;
  }
  if (param_1 == (char *)0x0) {
    FUN_100116c0();
  }
  else {
    DAT_100316b4 = param_1;
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      FUN_10010fa0(0x10030aa0,0x40,(int *)&DAT_100316b4);
    }
    DAT_100316b8 = param_1 + 0x40;
    if ((DAT_100316b8 != (char *)0x0) && (*DAT_100316b8 != '\0')) {
      FUN_10010fa0(0x100309e8,0x16,(int *)&DAT_100316b8);
    }
    DAT_100316bc = 0;
    if ((DAT_100316b4 == (char *)0x0) || (*DAT_100316b4 == '\0')) {
      if ((DAT_100316b8 == (char *)0x0) || (*DAT_100316b8 == '\0')) {
        FUN_100116c0();
      }
      else {
        FUN_100115c0();
      }
    }
    else if ((DAT_100316b8 == (char *)0x0) || (*DAT_100316b8 == '\0')) {
      FUN_10011420();
    }
    else {
      FUN_10011030();
    }
  }
  if (DAT_100316bc == 0) {
    uVar2 = 0;
  }
  else {
    _Value = FUN_100116f0((byte *)(param_1 + 0x80));
    if ((_Value == 0) || (BVar3 = IsValidCodePage(_Value & 0xffff), BVar3 == 0)) {
      uVar2 = 0;
    }
    else {
      BVar3 = IsValidLocale(DAT_100316a4,1);
      if (BVar3 == 0) {
        uVar2 = 0;
      }
      else {
        if (param_2 != (undefined2 *)0x0) {
          *param_2 = (undefined2)DAT_100316a4;
          param_2[1] = (undefined2)DAT_100316c0;
          local_8 = (undefined2)_Value;
          param_2[2] = local_8;
        }
        if (param_3 != 0) {
          iVar1 = (*DAT_100316c4)(DAT_100316a4,0x1001,param_3,0x40);
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = (*DAT_100316c4)(DAT_100316c0,0x1002,param_3 + 0x40,0x40);
          if (iVar1 == 0) {
            return 0;
          }
          __itoa(_Value,(char *)(param_3 + 0x80),10);
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


/*
 * FUN_10010fa0 at 10010fa0
 * undefined __cdecl FUN_10010fa0(int param_1, int param_2, int * param_3)
 * Address ranges: 10010fa0-10011021
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10010fa0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int local_10;
  uint local_c;
  
  local_c = 1;
  local_10 = 0;
  while ((local_10 <= param_2 && (local_c != 0))) {
    iVar1 = (local_10 + param_2) / 2;
    local_c = FUN_100134c0((byte *)*param_3,*(byte **)(param_1 + iVar1 * 8));
    if (local_c == 0) {
      *param_3 = param_1 + 4 + iVar1 * 8;
    }
    else if ((int)local_c < 0) {
      param_2 = iVar1 + -1;
    }
    else {
      local_10 = iVar1 + 1;
    }
  }
  return;
}


/*
 * FUN_10011030 at 10011030
 * undefined __stdcall FUN_10011030(void)
 * Address ranges: 10011030-100110e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10011030(void)

{
  size_t sVar1;
  int local_8;
  
  sVar1 = _strlen(DAT_100316b4);
  DAT_100316b0 = (uint)(sVar1 == 3);
  sVar1 = _strlen(DAT_100316b8);
  DAT_100316a8 = (uint)(sVar1 == 3);
  DAT_100316a4 = 0;
  if (DAT_100316b0 == 0) {
    local_8 = _GetPrimaryLen(DAT_100316b4);
  }
  else {
    local_8 = 2;
  }
  DAT_100316ac = local_8;
  EnumSystemLocalesA(FUN_100110f0,1);
  if ((((DAT_100316bc & 0x100) == 0) || ((DAT_100316bc & 0x200) == 0)) || ((DAT_100316bc & 7) == 0))
  {
    DAT_100316bc = 0;
  }
  return;
}


/*
 * FUN_100110f0 at 100110f0
 * bool __stdcall FUN_100110f0(char * param_1)
 * Address ranges: 100110f0-10011413
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool FUN_100110f0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  byte local_7c [120];
  
  iVar2 = FUN_10011a50(param_1);
  iVar3 = (*DAT_100316c4)(iVar2,(-(uint)(DAT_100316a8 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_100316bc = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_100134c0(DAT_100316b8,local_7c);
    if (uVar4 == 0) {
      iVar3 = (*DAT_100316c4)(iVar2,(-(uint)(DAT_100316b0 != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_100316bc = 0;
        return true;
      }
      uVar4 = FUN_100134c0(DAT_100316b4,local_7c);
      if (uVar4 == 0) {
        DAT_100316bc = DAT_100316bc | 0x304;
        DAT_100316a4 = iVar2;
        DAT_100316c0 = iVar2;
      }
      else if ((DAT_100316bc & 2) == 0) {
        if ((DAT_100316ac == 0) ||
           (iVar3 = FUN_10013590(DAT_100316b4,(char *)local_7c,DAT_100316ac), iVar3 != 0)) {
          if (((DAT_100316bc & 1) == 0) && (iVar3 = FUN_10011790((short)iVar2), iVar3 != 0)) {
            DAT_100316bc = DAT_100316bc | 1;
            DAT_100316c0 = iVar2;
          }
        }
        else {
          DAT_100316bc = DAT_100316bc | 2;
          DAT_100316c0 = iVar2;
          sVar5 = _strlen((char *)DAT_100316b4);
          if (sVar5 == DAT_100316ac) {
            DAT_100316a4 = iVar2;
          }
        }
      }
    }
    if ((DAT_100316bc & 0x300) != 0x300) {
      iVar3 = (*DAT_100316c4)(iVar2,(-(uint)(DAT_100316b0 != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_100316bc = 0;
        return true;
      }
      uVar4 = FUN_100134c0(DAT_100316b4,local_7c);
      if (uVar4 == 0) {
        uVar4 = DAT_100316bc | 0x200;
        if (DAT_100316b0 == 0) {
          DAT_100316bc = uVar4;
          if ((DAT_100316ac == 0) || (sVar5 = _strlen((char *)DAT_100316b4), sVar5 != DAT_100316ac))
          {
            DAT_100316bc = DAT_100316bc | 0x100;
            if (DAT_100316a4 == 0) {
              DAT_100316a4 = iVar2;
            }
          }
          else {
            iVar3 = FUN_100117e0(iVar2,1);
            if ((iVar3 != 0) && (DAT_100316bc = DAT_100316bc | 0x100, DAT_100316a4 == 0)) {
              DAT_100316a4 = iVar2;
            }
          }
        }
        else {
          DAT_100316bc = DAT_100316bc | 0x300;
          if (DAT_100316a4 == 0) {
            DAT_100316a4 = iVar2;
          }
        }
      }
      else if ((((DAT_100316b0 == 0) && (DAT_100316ac != 0)) &&
               (iVar3 = FUN_10013590(DAT_100316b4,(char *)local_7c,DAT_100316ac), iVar3 == 0)) &&
              ((iVar3 = FUN_100117e0(iVar2,0), iVar3 != 0 &&
               (DAT_100316bc = DAT_100316bc | 0x100, DAT_100316a4 == 0)))) {
        DAT_100316a4 = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_100316bc & 4) != 0);
  }
  return (bool)cVar1;
}


/*
 * FUN_10011420 at 10011420
 * undefined __stdcall FUN_10011420(void)
 * Address ranges: 10011420-10011493
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10011420(void)

{
  size_t sVar1;
  int local_8;
  
  sVar1 = _strlen(DAT_100316b4);
  DAT_100316b0 = (uint)(sVar1 == 3);
  if (DAT_100316b0 == 0) {
    local_8 = _GetPrimaryLen(DAT_100316b4);
  }
  else {
    local_8 = 2;
  }
  DAT_100316ac = local_8;
  EnumSystemLocalesA(FUN_100114a0,1);
  if ((DAT_100316bc & 4) == 0) {
    DAT_100316bc = 0;
  }
  return;
}


/*
 * FUN_100114a0 at 100114a0
 * bool __stdcall FUN_100114a0(char * param_1)
 * Address ranges: 100114a0-100115be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool FUN_100114a0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte local_7c [120];
  
  iVar2 = FUN_10011a50(param_1);
  iVar3 = (*DAT_100316c4)(iVar2,(-(uint)(DAT_100316b0 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_100316bc = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_100134c0(DAT_100316b4,local_7c);
    if (uVar4 == 0) {
      if ((DAT_100316b0 != 0) || (iVar3 = FUN_100117e0(iVar2,1), iVar3 != 0)) {
        DAT_100316bc = DAT_100316bc | 4;
        DAT_100316a4 = iVar2;
        DAT_100316c0 = iVar2;
      }
    }
    else if ((((DAT_100316b0 == 0) && (DAT_100316ac != 0)) &&
             (iVar3 = FUN_10013590(DAT_100316b4,(char *)local_7c,DAT_100316ac), iVar3 == 0)) &&
            (iVar3 = FUN_100117e0(iVar2,0), iVar3 != 0)) {
      DAT_100316bc = DAT_100316bc | 4;
      DAT_100316a4 = iVar2;
      DAT_100316c0 = iVar2;
    }
    cVar1 = '\x01' - ((DAT_100316bc & 4) != 0);
  }
  return (bool)cVar1;
}


/*
 * FUN_100115c0 at 100115c0
 * undefined __stdcall FUN_100115c0(void)
 * Address ranges: 100115c0-10011604
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_100115c0(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_100316b8);
  DAT_100316a8 = (uint)(sVar1 == 3);
  EnumSystemLocalesA(FUN_10011610,1);
  if ((DAT_100316bc & 4) == 0) {
    DAT_100316bc = 0;
  }
  return;
}


/*
 * FUN_10011610 at 10011610
 * bool __stdcall FUN_10011610(char * param_1)
 * Address ranges: 10011610-100116bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool FUN_10011610(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte local_7c [120];
  
  iVar2 = FUN_10011a50(param_1);
  iVar3 = (*DAT_100316c4)(iVar2,(-(uint)(DAT_100316a8 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_100316bc = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_100134c0(DAT_100316b8,local_7c);
    if (uVar4 == 0) {
      iVar3 = FUN_10011790((short)iVar2);
      if (iVar3 != 0) {
        DAT_100316bc = DAT_100316bc | 4;
        DAT_100316a4 = iVar2;
        DAT_100316c0 = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_100316bc & 4) != 0);
  }
  return (bool)cVar1;
}


/*
 * FUN_100116c0 at 100116c0
 * undefined __stdcall FUN_100116c0(void)
 * Address ranges: 100116c0-100116ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_100116c0(void)

{
  DAT_100316bc = DAT_100316bc | 0x104;
  DAT_100316c0 = GetUserDefaultLCID();
  DAT_100316a4 = DAT_100316c0;
  return;
}


/*
 * FUN_100116f0 at 100116f0
 * int __cdecl FUN_100116f0(byte * param_1)
 * Address ranges: 100116f0-1001178a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_100116f0(byte *param_1)

{
  int iVar1;
  byte local_c [8];
  
  if (((param_1 == (byte *)0x0) || (*param_1 == 0)) ||
     (iVar1 = _strcmp((char *)param_1,"ACP"), iVar1 == 0)) {
    iVar1 = (*DAT_100316c4)(DAT_100316c0,0x1004,local_c,8);
    if (iVar1 == 0) {
      return 0;
    }
    param_1 = local_c;
  }
  else {
    iVar1 = _strcmp((char *)param_1,"OCP");
    if (iVar1 == 0) {
      iVar1 = (*DAT_100316c4)(DAT_100316c0,0xb,local_c,8);
      if (iVar1 == 0) {
        return 0;
      }
      param_1 = local_c;
    }
  }
  iVar1 = FUN_100136a0(param_1);
  return iVar1;
}


/*
 * FUN_10011790 at 10011790
 * undefined4 __cdecl FUN_10011790(short param_1)
 * Address ranges: 10011790-100117de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10011790(short param_1)

{
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (9 < local_c) {
      return 1;
    }
    if (param_1 == *(short *)(&DAT_100309d4 + local_c * 2)) break;
    local_c = local_c + 1;
  }
  return 0;
}


/*
 * FUN_100117e0 at 100117e0
 * undefined4 __cdecl FUN_100117e0(int param_1, int param_2)
 * Address ranges: 100117e0-10011866
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_100117e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  size_t sVar4;
  char local_80 [120];
  uint local_8;
  
  local_8 = (uint)((ushort)param_1 & 0x3ff | 0x400);
  iVar1 = (*DAT_100316c4)(local_8,1,local_80,0x78);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_10011a50(local_80);
    if ((param_1 != iVar1) && (param_2 != 0)) {
      sVar3 = _GetPrimaryLen(DAT_100316b4);
      sVar4 = _strlen(DAT_100316b4);
      if (sVar3 == sVar4) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


/*
 * FUN_10011870 at 10011870
 * undefined4 __stdcall FUN_10011870(void)
 * Address ranges: 10011870-100118bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_10011870(void)

{
  BOOL BVar1;
  undefined4 local_9c;
  _OSVERSIONINFOA local_98;
  
  local_98.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_98);
  if ((BVar1 == 0) || (local_98.dwPlatformId != 2)) {
    local_9c = 0;
  }
  else {
    local_9c = 1;
  }
  return local_9c;
}


/*
 * crtGetLocaleInfoA at 100118c0
 * int __stdcall crtGetLocaleInfoA(uint param_1, uint param_2, char * param_3, int param_4)
 * Address ranges: 100118c0-10011a43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _crtGetLocaleInfoA@16  Library: Visual Studio 2003 Debug __stdcall crtGetLocaleInfoA,16
 */


/* Library Function - Single Match
    _crtGetLocaleInfoA@16
   
   Library: Visual Studio 2003 Debug
   __stdcall crtGetLocaleInfoA,16 */

int crtGetLocaleInfoA(uint param_1,uint param_2,char *param_3,int param_4)

{
  int iVar1;
  int local_14;
  char *local_c;
  int local_8;
  
  local_14 = 0;
  local_8 = 0x1a;
  local_c = (char *)0x0;
  do {
    if (local_8 < local_14) {
LAB_10011a28:
      iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
      return iVar1;
    }
    iVar1 = (local_14 + local_8) / 2;
    if (param_1 == *(uint *)(&DAT_10030530 + iVar1 * 0x2c)) {
      if (param_2 < 0xc) {
        if (param_2 == 0xb) {
          local_c = &DAT_1003054c + iVar1 * 0x2c;
        }
        else if (param_2 == 1) {
          local_c = &DAT_10030534 + iVar1 * 0x2c;
        }
        else if (param_2 == 3) {
          local_c = &DAT_10030540 + iVar1 * 0x2c;
        }
        else if (param_2 == 7) {
          local_c = &DAT_10030548 + iVar1 * 0x2c;
        }
      }
      else if (param_2 == 0x1001) {
        local_c = (&PTR_s_Spanish___Traditional_Sort_1003053c)[iVar1 * 0xb];
      }
      else if (param_2 == 0x1002) {
        local_c = (&PTR_s_Spain_10030544)[iVar1 * 0xb];
      }
      else if (param_2 == 0x1004) {
        local_c = &DAT_10030554 + iVar1 * 0x2c;
      }
      if ((local_c != (char *)0x0) && (0 < param_4)) {
        _strncpy(param_3,local_c,param_4 - 1);
        param_3[param_4 + -1] = '\0';
        return 1;
      }
      goto LAB_10011a28;
    }
    if (param_1 < *(uint *)(&DAT_10030530 + iVar1 * 0x2c)) {
      local_8 = iVar1 + -1;
    }
    else {
      local_14 = iVar1 + 1;
    }
  } while( true );
}


/*
 * FUN_10011a50 at 10011a50
 * int __cdecl FUN_10011a50(char * param_1)
 * Address ranges: 10011a50-10011ac5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10011a50(char *param_1)

{
  char local_c;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    local_c = *param_1;
    param_1 = param_1 + 1;
    if (local_c == '\0') break;
    if ((local_c < 'a') || ('f' < local_c)) {
      if (('@' < local_c) && (local_c < 'G')) {
        local_c = local_c + -7;
      }
    }
    else {
      local_c = local_c + -0x27;
    }
    local_8 = local_8 * 0x10 + -0x30 + (int)local_c;
  }
  return local_8;
}


/*
 * _GetPrimaryLen at 10011ad0
 * int __cdecl _GetPrimaryLen(char * param_1)
 * Address ranges: 10011ad0-10011b34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _GetPrimaryLen  Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug
 */


/* Library Function - Single Match
    _GetPrimaryLen
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

int __cdecl _GetPrimaryLen(char *param_1)

{
  int local_c;
  char local_8;
  
  local_c = 0;
  local_8 = *param_1;
  while (((param_1 = param_1 + 1, '@' < local_8 && (local_8 < '[')) ||
         (('`' < local_8 && (local_8 < '{'))))) {
    local_c = local_c + 1;
    local_8 = *param_1;
  }
  return local_c;
}


/*
 * FUN_10011b40 at 10011b40
 * undefined1 * __stdcall FUN_10011b40(void)
 * Address ranges: 10011b40-10011c60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1 * FUN_10011b40(void)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint *_Str;
  undefined1 *puVar6;
  undefined1 *local_18;
  uint local_14;
  int local_c;
  
  puVar1 = PTR_PTR_10030ca8;
  local_c = 0;
  for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
    sVar2 = _strlen(*(char **)(puVar1 + local_14 * 4));
    sVar3 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x1c));
    local_c = sVar3 + local_c + 2 + sVar2;
  }
  puVar4 = (undefined1 *)FUN_100036f0((void *)(local_c + 1));
  if (puVar4 != (undefined1 *)0x0) {
    local_18 = puVar4;
    for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
      *local_18 = 0x3a;
      puVar5 = FUN_10001ec0((uint *)(local_18 + 1),*(uint **)(puVar1 + local_14 * 4));
      sVar2 = _strlen((char *)puVar5);
      puVar6 = (undefined1 *)((int)(local_18 + 1) + sVar2);
      *puVar6 = 0x3a;
      puVar5 = (uint *)(puVar6 + 1);
      _Str = FUN_10001ec0(puVar5,*(uint **)(puVar1 + local_14 * 4 + 0x1c));
      sVar2 = _strlen((char *)_Str);
      local_18 = (undefined1 *)((int)puVar5 + sVar2);
    }
    *local_18 = 0;
  }
  return puVar4;
}


/*
 * FUN_10011c70 at 10011c70
 * undefined1 * __stdcall FUN_10011c70(void)
 * Address ranges: 10011c70-10011d92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1 * FUN_10011c70(void)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint *_Str;
  undefined1 *puVar6;
  undefined1 *local_18;
  uint local_14;
  int local_c;
  
  puVar1 = PTR_PTR_10030ca8;
  local_c = 0;
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    sVar2 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x38));
    sVar3 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x68));
    local_c = sVar3 + local_c + 2 + sVar2;
  }
  puVar4 = (undefined1 *)FUN_100036f0((void *)(local_c + 1));
  if (puVar4 != (undefined1 *)0x0) {
    local_18 = puVar4;
    for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
      *local_18 = 0x3a;
      puVar5 = FUN_10001ec0((uint *)(local_18 + 1),*(uint **)(puVar1 + local_14 * 4 + 0x38));
      sVar2 = _strlen((char *)puVar5);
      puVar6 = (undefined1 *)((int)(local_18 + 1) + sVar2);
      *puVar6 = 0x3a;
      puVar5 = (uint *)(puVar6 + 1);
      _Str = FUN_10001ec0(puVar5,*(uint **)(puVar1 + local_14 * 4 + 0x68));
      sVar2 = _strlen((char *)_Str);
      local_18 = (undefined1 *)((int)puVar5 + sVar2);
    }
    *local_18 = 0;
  }
  return puVar4;
}


/*
 * FUN_10011da0 at 10011da0
 * undefined4 * __stdcall FUN_10011da0(void)
 * Address ranges: 10011da0-1001210d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * FUN_10011da0(void)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  size_t sVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint *local_18;
  uint local_14;
  int local_c;
  
  puVar1 = PTR_PTR_10030ca8;
  local_c = 0;
  for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
    sVar2 = _strlen(*(char **)(puVar1 + local_14 * 4));
    sVar3 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x1c));
    local_c = sVar3 + local_c + 2 + sVar2;
  }
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    sVar2 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x38));
    sVar3 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x68));
    local_c = sVar3 + local_c + 2 + sVar2;
  }
  sVar2 = _strlen(*(char **)(puVar1 + 0x98));
  sVar3 = _strlen(*(char **)(puVar1 + 0x9c));
  sVar4 = _strlen(*(char **)(puVar1 + 0xa0));
  sVar5 = _strlen(*(char **)(puVar1 + 0xa4));
  sVar6 = _strlen(*(char **)(puVar1 + 0xa8));
  puVar7 = (undefined4 *)
           FUN_100036f0((void *)(sVar3 + local_c + sVar2 + sVar4 + sVar5 + sVar6 + 0xb1));
  if (puVar7 != (undefined4 *)0x0) {
    local_18 = puVar7 + 0x2b;
    FUN_100061d0(puVar7,(undefined4 *)PTR_PTR_10030ca8,0xac);
    for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
      puVar7[local_14] = local_18;
      puVar8 = FUN_10001ec0(local_18,*(uint **)(puVar1 + local_14 * 4));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
      puVar7[local_14 + 7] = local_18;
      puVar8 = FUN_10001ec0(local_18,*(uint **)(puVar1 + local_14 * 4 + 0x1c));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
    }
    for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
      puVar7[local_14 + 0xe] = local_18;
      puVar8 = FUN_10001ec0(local_18,*(uint **)(puVar1 + local_14 * 4 + 0x38));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
      puVar7[local_14 + 0x1a] = local_18;
      puVar8 = FUN_10001ec0(local_18,*(uint **)(puVar1 + local_14 * 4 + 0x68));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
    }
    puVar7[0x26] = local_18;
    puVar8 = FUN_10001ec0(local_18,*(uint **)(puVar1 + 0x98));
    sVar2 = _strlen((char *)puVar8);
    local_18 = (uint *)((int)local_18 + sVar2 + 1);
    puVar7[0x27] = local_18;
    puVar8 = FUN_10001ec0(local_18,*(uint **)(puVar1 + 0x9c));
    sVar2 = _strlen((char *)puVar8);
    local_18 = (uint *)((int)local_18 + sVar2 + 1);
    puVar7[0x28] = local_18;
    puVar8 = FUN_10001ec0(local_18,*(uint **)(puVar1 + 0xa0));
    sVar2 = _strlen((char *)puVar8);
    local_18 = (uint *)((int)local_18 + sVar2 + 1);
    puVar7[0x29] = local_18;
    puVar8 = FUN_10001ec0(local_18,*(uint **)(puVar1 + 0xa4));
    sVar2 = _strlen((char *)puVar8);
    puVar7[0x2a] = (int)local_18 + sVar2 + 1;
  }
  return puVar7;
}


/*
 * FUN_10012110 at 10012110
 * undefined __cdecl FUN_10012110(byte * param_1, uint param_2, byte * param_3, int * param_4)
 * Address ranges: 10012110-1001212e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10012110(byte *param_1,uint param_2,byte *param_3,int *param_4)

{
  FUN_10012130(param_1,param_2,param_3,param_4,(undefined *)0x0);
  return;
}


/*
 * FUN_10012130 at 10012130
 * int __cdecl FUN_10012130(byte * param_1, uint param_2, byte * param_3, int * param_4, undefined * param_5)
 * Address ranges: 10012130-100122b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10012130(byte *param_1,uint param_2,byte *param_3,int *param_4,undefined *param_5)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  undefined *local_14;
  uint local_10;
  uint local_c;
  undefined *local_8;
  
  local_10 = param_2;
  InterlockedIncrement(&DAT_100317c4);
  bVar3 = DAT_100317b4 != 0;
  if (bVar3) {
    InterlockedDecrement(&DAT_100317c4);
    FUN_100073f0(0x13);
  }
  local_c = (uint)bVar3;
  if (param_5 == (undefined *)0x0) {
    local_14 = PTR_PTR_10030ca8;
  }
  else {
    local_14 = param_5;
  }
  local_8 = local_14;
  for (; (local_10 != 0 && (*param_3 != 0)); param_3 = param_3 + 1) {
    if (*param_3 == 0x25) {
      bVar3 = param_3[1] == 0x23;
      pbVar1 = param_3 + 1;
      if (bVar3) {
        pbVar1 = param_3 + 2;
      }
      param_3 = pbVar1;
      DAT_100317a0 = (uint)bVar3;
      FUN_100122c0(*param_3,param_4,(int *)&param_1,&local_10,(int)local_8);
    }
    else {
      if (((*(ushort *)(PTR_DAT_10030008 + (uint)*param_3 * 2) & 0x8000) != 0) && (1 < local_10)) {
        *param_1 = *param_3;
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
        local_10 = local_10 - 1;
      }
      *param_1 = *param_3;
      param_1 = param_1 + 1;
      local_10 = local_10 - 1;
    }
  }
  if (local_c == 0) {
    InterlockedDecrement(&DAT_100317c4);
  }
  else {
    FUN_10007490(0x13);
  }
  if (local_10 == 0) {
    iVar2 = 0;
  }
  else {
    *param_1 = 0;
    iVar2 = param_2 - local_10;
  }
  return iVar2;
}


/*
 * FUN_100122c0 at 100122c0
 * undefined __cdecl FUN_100122c0(undefined1 param_1, int * param_2, int * param_3, uint * param_4, int param_5)
 * Address ranges: 100122c0-1001282c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100122c0(undefined1 param_1,int *param_2,int *param_3,uint *param_4,int param_5)

{
  int local_c;
  int local_8;
  
  switch(param_1) {
  case 0x25:
    *(undefined1 *)*param_3 = 0x25;
    *param_3 = *param_3 + 1;
    *param_4 = *param_4 - 1;
    break;
  case 0x41:
    FID_conflict__store_str(*(char **)(param_5 + 0x1c + param_2[6] * 4),param_3,(int *)param_4);
    break;
  case 0x42:
    FID_conflict__store_str(*(char **)(param_5 + 0x68 + param_2[4] * 4),param_3,(int *)param_4);
    break;
  case 0x48:
    DAT_100317b0 = DAT_100317a0;
    FUN_10012930(param_2[2],2,param_3,param_4);
    break;
  case 0x49:
    DAT_100317b0 = DAT_100317a0;
    local_8 = param_2[2] % 0xc;
    if (local_8 == 0) {
      local_8 = 0xc;
    }
    FUN_10012930(local_8,2,param_3,param_4);
    break;
  case 0x4d:
    DAT_100317b0 = DAT_100317a0;
    FUN_10012930(param_2[1],2,param_3,param_4);
    break;
  case 0x53:
    DAT_100317b0 = DAT_100317a0;
    FUN_10012930(*param_2,2,param_3,param_4);
    break;
  case 0x55:
    local_c = param_2[6];
    goto LAB_1001266d;
  case 0x57:
    if (param_2[6] == 0) {
      local_c = 6;
    }
    else {
      local_c = param_2[6] + -1;
    }
LAB_1001266d:
    DAT_100317b0 = DAT_100317a0;
    if (param_2[7] < local_c) {
      local_8 = 0;
    }
    else {
      local_8 = param_2[7] / 7;
      if (local_c <= param_2[7] % 7) {
        local_8 = local_8 + 1;
      }
    }
    FUN_10012930(local_8,2,param_3,param_4);
    break;
  case 0x58:
    DAT_100317a0 = 0;
    FUN_10012a90(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
    break;
  case 0x59:
    DAT_100317b0 = DAT_100317a0;
    FUN_10012930((param_2[5] / 100 + 0x13) * 100 + param_2[5] % 100,4,param_3,param_4);
    break;
  case 0x5a:
  case 0x7a:
    FUN_100138f0();
    FID_conflict__store_str((&PTR_DAT_10030e2c)[param_2[8] != 0],param_3,(int *)param_4);
    break;
  case 0x61:
    FID_conflict__store_str(*(char **)(param_5 + param_2[6] * 4),param_3,(int *)param_4);
    break;
  case 0x62:
    FID_conflict__store_str(*(char **)(param_5 + 0x38 + param_2[4] * 4),param_3,(int *)param_4);
    break;
  case 99:
    if (DAT_100317a0 == 0) {
      FUN_10012a90(*(byte **)(param_5 + 0xa0),(int)param_2,param_3,param_4,param_5);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_10012a90(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
      }
    }
    else {
      DAT_100317a0 = 0;
      FUN_10012a90(*(byte **)(param_5 + 0xa4),(int)param_2,param_3,param_4,param_5);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_10012a90(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
      }
    }
    break;
  case 100:
    DAT_100317b0 = DAT_100317a0;
    FUN_10012930(param_2[3],2,param_3,param_4);
    break;
  case 0x6a:
    DAT_100317b0 = DAT_100317a0;
    FUN_10012930(param_2[7] + 1,3,param_3,param_4);
    break;
  case 0x6d:
    DAT_100317b0 = DAT_100317a0;
    FUN_10012930(param_2[4] + 1,2,param_3,param_4);
    break;
  case 0x70:
    if (param_2[2] < 0xc) {
      FID_conflict__store_str(*(char **)(param_5 + 0x98),param_3,(int *)param_4);
    }
    else {
      FID_conflict__store_str(*(char **)(param_5 + 0x9c),param_3,(int *)param_4);
    }
    break;
  case 0x77:
    DAT_100317b0 = DAT_100317a0;
    FUN_10012930(param_2[6],1,param_3,param_4);
    break;
  case 0x78:
    if (DAT_100317a0 == 0) {
      FUN_10012a90(*(byte **)(param_5 + 0xa0),(int)param_2,param_3,param_4,param_5);
    }
    else {
      DAT_100317a0 = 0;
      FUN_10012a90(*(byte **)(param_5 + 0xa4),(int)param_2,param_3,param_4,param_5);
    }
    break;
  case 0x79:
    DAT_100317b0 = DAT_100317a0;
    FUN_10012930(param_2[5] % 100,2,param_3,param_4);
  }
  return;
}


/*
 * FID_conflict:_store_str at 100128e0
 * undefined __cdecl FID_conflict:_store_str(char * param_1, int * param_2, int * param_3)
 * Address ranges: 100128e0-10012927
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Multiple Matches With Different Base Names  void __cdecl _store_str(char *,char * *,unsigned int *)  __store_str  Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug
 */


/* Library Function - Multiple Matches With Different Base Names
    void __cdecl _store_str(char *,char * *,unsigned int *)
    __store_str
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

void __cdecl FID_conflict__store_str(char *param_1,int *param_2,int *param_3)

{
  while ((*param_3 != 0 && (*param_1 != '\0'))) {
    *(char *)*param_2 = *param_1;
    *param_2 = *param_2 + 1;
    param_1 = param_1 + 1;
    *param_3 = *param_3 + -1;
  }
  return;
}


/*
 * FUN_10012930 at 10012930
 * undefined __cdecl FUN_10012930(int param_1, uint param_2, int * param_3, uint * param_4)
 * Address ranges: 10012930-100129dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10012930(int param_1,uint param_2,int *param_3,uint *param_4)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (DAT_100317b0 == 0) {
    if (param_2 < *param_4) {
      while (param_2 = param_2 - 1, param_2 != 0xffffffff) {
        *(char *)(*param_3 + param_2) = (char)(param_1 % 10) + '0';
        param_1 = param_1 / 10;
        local_8 = local_8 + 1;
      }
      *param_3 = *param_3 + local_8;
      *param_4 = *param_4 - local_8;
    }
    else {
      *param_4 = 0;
    }
  }
  else {
    FID_conflict__store_number(param_1,param_3,param_4);
  }
  return;
}


/*
 * FID_conflict:_store_number at 100129e0
 * undefined __cdecl FID_conflict:_store_number(int param_1, int * param_2, uint * param_3)
 * Address ranges: 100129e0-10012a8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Multiple Matches With Different Base Names  void __cdecl _store_number(int,char * *,unsigned int *)  __store_number  Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug
 */


/* Library Function - Multiple Matches With Different Base Names
    void __cdecl _store_number(int,char * *,unsigned int *)
    __store_number
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

void __cdecl FID_conflict__store_number(int param_1,int *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  char *local_c;
  char *local_8;
  
  local_8 = (char *)*param_2;
  uVar2 = *param_3;
  while (1 < uVar2) {
    *local_8 = (char)(param_1 % 10) + '0';
    local_8 = local_8 + 1;
    *param_3 = *param_3 - 1;
    param_1 = param_1 / 10;
    if (param_1 < 1) break;
    uVar2 = *param_3;
  }
  local_c = (char *)*param_2;
  *param_2 = (int)local_8;
  local_8 = local_8 + -1;
  do {
    cVar1 = *local_8;
    *local_8 = *local_c;
    local_8 = local_8 + -1;
    *local_c = cVar1;
    local_c = local_c + 1;
  } while (local_c < local_8);
  return;
}


/*
 * FUN_10012a90 at 10012a90
 * undefined __cdecl FUN_10012a90(byte * param_1, int param_2, int * param_3, uint * param_4, int param_5)
 * Address ranges: 10012a90-10012f0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_10012a90(byte *param_1,int param_2,int *param_3,uint *param_4,int param_5)

{
  uint uVar1;
  byte *local_14;
  uint local_10;
  char local_c;
  byte *local_8;
  
LAB_10012a96:
  do {
    if ((*param_1 == 0) || (*param_4 == 0)) {
      return;
    }
    local_c = '\0';
    DAT_100317b0 = 0;
    local_10 = 0;
    local_8 = param_1;
    while (*local_8 == *param_1) {
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
    }
    switch(*param_1) {
    case 0x27:
      if ((local_10 & 1) == 0) {
        param_1 = param_1 + local_10;
      }
      else {
        param_1 = param_1 + local_10;
        while( true ) {
          if ((*param_1 == 0) || (*param_4 == 0)) goto LAB_10012a96;
          if (*param_1 == 0x27) break;
          if (((*(ushort *)(PTR_DAT_10030008 + (uint)*param_1 * 2) & 0x8000) != 0) && (1 < *param_4)
             ) {
            *(byte *)*param_3 = *param_1;
            *param_3 = *param_3 + 1;
            param_1 = param_1 + 1;
            *param_4 = *param_4 - 1;
          }
          *(byte *)*param_3 = *param_1;
          *param_3 = *param_3 + 1;
          param_1 = param_1 + 1;
          *param_4 = *param_4 - 1;
        }
        param_1 = param_1 + 1;
      }
      goto LAB_10012a96;
    case 0x41:
    case 0x61:
      uVar1 = FUN_100134c0(param_1,(byte *)"am/pm");
      if (uVar1 == 0) {
        local_8 = param_1 + 5;
      }
      else {
        uVar1 = FUN_100134c0(param_1,&DAT_1002d858);
        if (uVar1 == 0) {
          local_8 = param_1 + 3;
        }
      }
      local_c = 'p';
      break;
    case 0x48:
      if (local_10 == 1) {
        DAT_100317b0 = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'H';
      break;
    case 0x4d:
      switch(local_10) {
      case 1:
        DAT_100317b0 = 1;
      case 2:
        local_c = 'm';
        break;
      case 3:
        local_c = 'b';
        break;
      case 4:
        local_c = 'B';
      }
      break;
    case 100:
      switch(local_10) {
      case 1:
        DAT_100317b0 = 1;
      case 2:
        local_c = 'd';
        break;
      case 3:
        local_c = 'a';
        break;
      case 4:
        local_c = 'A';
      }
      break;
    case 0x68:
      if (local_10 == 1) {
        DAT_100317b0 = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'I';
      break;
    case 0x6d:
      if (local_10 == 1) {
        DAT_100317b0 = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'M';
      break;
    case 0x73:
      if (local_10 == 1) {
        DAT_100317b0 = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'S';
      break;
    case 0x74:
      goto switchD_10012b21_caseD_74;
    case 0x79:
      if (local_10 == 2) {
        local_c = 'y';
      }
      else if (local_10 == 4) {
        local_c = 'Y';
      }
    }
    if (local_c == '\0') {
      if ((*(ushort *)(PTR_DAT_10030008 + (uint)*param_1 * 2) & 0x8000) != 0) {
        *(byte *)*param_3 = *param_1;
        *param_3 = *param_3 + 1;
        param_1 = param_1 + 1;
        *param_4 = *param_4 - 1;
      }
      *(byte *)*param_3 = *param_1;
      *param_3 = *param_3 + 1;
      param_1 = param_1 + 1;
      *param_4 = *param_4 - 1;
    }
    else {
      FUN_100122c0(local_c,(int *)param_2,param_3,param_4,param_5);
      param_1 = local_8;
    }
  } while( true );
switchD_10012b21_caseD_74:
  if (*(int *)(param_2 + 8) < 0xc) {
    local_14 = *(byte **)(param_5 + 0x98);
  }
  else {
    local_14 = *(byte **)(param_5 + 0x9c);
  }
  while ((param_1 = local_8, 0 < (int)local_10 && (*param_4 != 0))) {
    if (((*(ushort *)(PTR_DAT_10030008 + (uint)*local_14 * 2) & 0x8000) != 0) && (1 < *param_4)) {
      *(byte *)*param_3 = *local_14;
      *param_3 = *param_3 + 1;
      local_14 = local_14 + 1;
      *param_4 = *param_4 - 1;
    }
    *(byte *)*param_3 = *local_14;
    *param_3 = *param_3 + 1;
    local_14 = local_14 + 1;
    *param_4 = *param_4 - 1;
    local_10 = local_10 - 1;
  }
  goto LAB_10012a96;
}


/*
 * FUN_10012fb0 at 10012fb0
 * undefined4 __cdecl FUN_10012fb0(int param_1, LCID param_2, LCTYPE param_3, int * param_4)
 * Address ranges: 10012fb0-10013239
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10012fb0(int param_1,LCID param_2,LCTYPE param_3,int *param_4)

{
  byte bVar1;
  DWORD DVar2;
  void *pvVar3;
  int iVar4;
  uint local_ac;
  int local_a4;
  CHAR local_90 [128];
  LPSTR local_10;
  void *local_c;
  int local_8;
  
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    iVar4 = FUN_10014230(param_2,param_3,(LPWSTR)&DAT_100316c8,4,0);
    if (iVar4 != 0) {
      *(undefined1 *)param_4 = 0;
      local_a4 = 0;
      while( true ) {
        if (3 < local_a4) {
          return 0;
        }
        if (DAT_10030214 < 2) {
          bVar1 = (&DAT_100316c8)[local_a4 * 2];
          local_ac = *(ushort *)(PTR_DAT_10030008 + (uint)bVar1 * 2) & 4;
        }
        else {
          bVar1 = (&DAT_100316c8)[local_a4 * 2];
          local_ac = FUN_1000b640((uint)bVar1,4);
        }
        if (local_ac == 0) break;
        *(byte *)param_4 = (char)*param_4 * '\n' + -0x30 + bVar1;
        local_a4 = local_a4 + 1;
      }
      return 0;
    }
    return 0xffffffff;
  }
  local_10 = local_90;
  local_8 = 0;
  local_c = (void *)FUN_100143d0(param_2,param_3,local_10,0x80,0);
  if (local_c == (void *)0x0) {
    DVar2 = GetLastError();
    if (((DVar2 != 0x7a) ||
        (pvVar3 = (void *)FUN_100143d0(param_2,param_3,(LPSTR)0x0,0,0), pvVar3 == (void *)0x0)) ||
       (local_10 = (LPSTR)FUN_10003710(pvVar3,2,0x1002d864,0x58), local_10 == (LPSTR)0x0))
    goto LAB_100130fd;
    local_8 = 1;
    local_c = (void *)FUN_100143d0(param_2,param_3,local_10,(int)pvVar3,0);
    if (local_c == (void *)0x0) goto LAB_100130fd;
  }
  iVar4 = FUN_10003710(local_c,2,0x1002d864,99);
  *param_4 = iVar4;
  if (*param_4 != 0) {
    _strncpy((char *)*param_4,local_10,(size_t)local_c);
    if (local_8 != 0) {
      FUN_100041a0(local_10,2);
    }
    return 0;
  }
LAB_100130fd:
  if (local_8 != 0) {
    FUN_100041a0(local_10,2);
  }
  return 0xffffffff;
}


/*
 * FUN_10013240 at 10013240
 * undefined * __stdcall FUN_10013240(void)
 * Address ranges: 10013240-10013249
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined * FUN_10013240(void)

{
  return PTR_PTR_10030d98;
}


/*
 * FUN_10013250 at 10013250
 * BOOL __cdecl FUN_10013250(DWORD param_1, LPCWSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6)
 * Address ranges: 10013250-10013376;1001338e-100133f5;1001340d-100134bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


BOOL __cdecl
FUN_10013250(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

{
  undefined1 *puVar1;
  BOOL BVar2;
  size_t _Size;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1002d870;
  puStack_10 = &LAB_1000eb08;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffbc;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffbc;
  if (DAT_100316d4 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_100316d4 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_100316d4 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (DAT_100316d4 == 1) {
    BVar2 = GetStringTypeW(param_1,param_2,param_3,param_4);
  }
  else if (DAT_100316d4 == 2) {
    if (param_5 == 0) {
      param_5 = DAT_1003164c;
    }
    _Size = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (_Size == 0) {
      BVar2 = 0;
    }
    else {
      local_8 = 0;
      FUN_10008bb0();
      local_1c = &stack0xffffffbc;
      _memset(&stack0xffffffbc,0,_Size);
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x44) {
        BVar2 = 0;
      }
      else {
        iVar3 = WideCharToMultiByte(param_5,0x220,param_2,param_3,&stack0xffffffbc,_Size,(LPCSTR)0x0
                                    ,(LPBOOL)0x0);
        if (iVar3 == 0) {
          BVar2 = 0;
        }
        else {
          local_8 = 1;
          FUN_10008bb0();
          local_8 = 0xffffffff;
          if (&stack0x00000000 == (undefined1 *)0x44) {
            BVar2 = 0;
          }
          else {
            if (param_6 == 0) {
              param_6 = DAT_1003163c;
            }
            *(undefined2 *)(&stack0xffffffbc + param_3 * 2) = 0xffff;
            *(undefined2 *)(&stack0xffffffba + param_3 * 2) = 0xffff;
            local_1c = &stack0xffffffbc;
            BVar2 = GetStringTypeA(param_6,param_1,&stack0xffffffbc,_Size,(LPWORD)&stack0xffffffbc);
            if ((*(short *)(&stack0xffffffba + param_3 * 2) == -1) ||
               (*(short *)(&stack0xffffffbc + param_3 * 2) != -1)) {
              BVar2 = 0;
            }
            else {
              FUN_1000dda0((undefined4 *)param_4,(undefined4 *)&stack0xffffffbc,param_3 << 1);
            }
          }
        }
      }
    }
  }
  else {
    BVar2 = 0;
  }
  ExceptionList = local_14;
  return BVar2;
}


/*
 * FUN_100134c0 at 100134c0
 * uint __cdecl FUN_100134c0(byte * param_1, byte * param_2)
 * Address ranges: 100134c0-1001358f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_100134c0(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar8;
  uint uVar9;
  uint uVar7;
  
  iVar2 = DAT_100317c4;
  if (DAT_1003163c == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1001350e;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
LAB_1001350e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    DAT_100317c4 = DAT_100317c4 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_100317b4;
    if (bVar1) {
      LOCK();
      UNLOCK();
      DAT_100317c4 = iVar2;
      FUN_100073f0(0x13);
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1001356f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_10014630(uVar8);
      uVar7 = FUN_10014630(uVar7);
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1001356f:
    if (uVar9 == 0) {
      LOCK();
      DAT_100317c4 = DAT_100317c4 + -1;
      UNLOCK();
    }
    else {
      FUN_10007490(0x13);
    }
  }
  return uVar7;
}


/*
 * FUN_10013590 at 10013590
 * undefined4 __cdecl FUN_10013590(byte * param_1, char * param_2, int param_3)
 * Address ranges: 10013590-10013690
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10013590(byte *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  
  iVar2 = DAT_100317c4;
  uVar6 = 0;
  if (param_3 != 0) {
    if (DAT_1003163c == 0) {
      do {
        bVar3 = *param_1;
        cVar1 = *param_2;
        uVar4 = CONCAT11(bVar3,cVar1);
        if (bVar3 == 0) break;
        uVar4 = CONCAT11(bVar3,cVar1);
        uVar7 = (uint)uVar4;
        if (cVar1 == '\0') break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar7 = (uint)CONCAT11(bVar3 + 0x20,cVar1);
        }
        uVar4 = (ushort)uVar7;
        bVar3 = (byte)uVar7;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar4 = (ushort)CONCAT31((int3)(uVar7 >> 8),bVar3 + 0x20);
        }
        bVar3 = (byte)(uVar4 >> 8);
        bVar8 = bVar3 < (byte)uVar4;
        if (bVar3 != (byte)uVar4) goto LAB_100135ef;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_100135ef:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      DAT_100317c4 = DAT_100317c4 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_100317b4;
      if (bVar8) {
        LOCK();
        UNLOCK();
        DAT_100317c4 = iVar2;
        FUN_100073f0(0x13);
      }
      uVar9 = (uint)bVar8;
      uVar5 = 0;
      uVar7 = 0;
      do {
        uVar5 = CONCAT31((int3)(uVar5 >> 8),*param_1);
        uVar7 = CONCAT31((int3)(uVar7 >> 8),*param_2);
        if ((uVar5 == 0) || (uVar7 == 0)) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        uVar7 = FUN_10014630(uVar7);
        uVar5 = FUN_10014630(uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_10013665;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_10013665:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        DAT_100317c4 = DAT_100317c4 + -1;
        UNLOCK();
      }
      else {
        FUN_10007490(0x13);
      }
    }
  }
  return uVar6;
}


/*
 * FUN_100136a0 at 100136a0
 * int __cdecl FUN_100136a0(byte * param_1)
 * Address ranges: 100136a0-1001379e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_100136a0(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint local_18;
  uint local_14;
  int local_c;
  uint local_8;
  
  while( true ) {
    if (DAT_10030214 < 2) {
      local_14 = *(ushort *)(PTR_DAT_10030008 + (uint)*param_1 * 2) & 8;
    }
    else {
      local_14 = FUN_1000b640((uint)*param_1,8);
    }
    if (local_14 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar2 = (uint)*param_1;
  if ((uVar2 == 0x2d) || (pbVar1 = param_1 + 1, local_8 = uVar2, uVar2 == 0x2b)) {
    local_8 = (uint)param_1[1];
    pbVar1 = param_1 + 2;
  }
  param_1 = pbVar1;
  local_c = 0;
  while( true ) {
    if (DAT_10030214 < 2) {
      local_18 = *(ushort *)(PTR_DAT_10030008 + local_8 * 2) & 4;
    }
    else {
      local_18 = FUN_1000b640(local_8,4);
    }
    if (local_18 == 0) break;
    local_c = local_c * 10 + -0x30 + local_8;
    local_8 = (uint)*param_1;
    param_1 = param_1 + 1;
  }
  if (uVar2 == 0x2d) {
    local_c = -local_c;
  }
  return local_c;
}


/*
 * FUN_100137a0 at 100137a0
 * undefined __cdecl FUN_100137a0(byte * param_1)
 * Address ranges: 100137a0-100137b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_100137a0(byte *param_1)

{
  FUN_100136a0(param_1);
  return;
}


/*
 * FUN_100137c0 at 100137c0
 * undefined8 __cdecl FUN_100137c0(byte * param_1)
 * Address ranges: 100137c0-100138e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 __cdecl FUN_100137c0(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  uint local_1c;
  uint local_18;
  undefined8 local_10;
  uint local_8;
  
  while( true ) {
    if (DAT_10030214 < 2) {
      local_18 = *(ushort *)(PTR_DAT_10030008 + (uint)*param_1 * 2) & 8;
    }
    else {
      local_18 = FUN_1000b640((uint)*param_1,8);
    }
    if (local_18 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar2 = (uint)*param_1;
  if ((uVar2 == 0x2d) || (pbVar1 = param_1 + 1, local_8 = uVar2, uVar2 == 0x2b)) {
    local_8 = (uint)param_1[1];
    pbVar1 = param_1 + 2;
  }
  param_1 = pbVar1;
  local_10 = 0;
  while( true ) {
    if (DAT_10030214 < 2) {
      local_1c = *(ushort *)(PTR_DAT_10030008 + local_8 * 2) & 4;
    }
    else {
      local_1c = FUN_1000b640(local_8,4);
    }
    if (local_1c == 0) break;
    local_10 = __allmul((uint)local_10,local_10._4_4_,10,0);
    local_10 = local_10 + (int)(local_8 - 0x30);
    local_8 = (uint)*param_1;
    param_1 = param_1 + 1;
  }
  if (uVar2 == 0x2d) {
    bVar3 = (uint)local_10 != 0;
    local_10._0_4_ = -(uint)local_10;
    local_10._4_4_ = -(local_10._4_4_ + (uint)bVar3);
  }
  return CONCAT44(local_10._4_4_,(uint)local_10);
}


/*
 * FUN_100138f0 at 100138f0
 * undefined __stdcall FUN_100138f0(void)
 * Address ranges: 100138f0-1001392c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_100138f0(void)

{
  if (DAT_10031790 == 0) {
    FUN_100073f0(0xb);
    if (DAT_10031790 == 0) {
      FUN_10013950();
      DAT_10031790 = DAT_10031790 + 1;
    }
    FUN_10007490(0xb);
  }
  return;
}


/*
 * FUN_10013930 at 10013930
 * undefined __stdcall FUN_10013930(void)
 * Address ranges: 10013930-1001394d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10013930(void)

{
  FUN_100073f0(0xb);
  FUN_10013950();
  FUN_10007490(0xb);
  return;
}


/*
 * FUN_10013950 at 10013950
 * undefined __stdcall FUN_10013950(void)
 * Address ranges: 10013950-10013cfa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_10013950(void)

{
  uint *_Str1;
  DWORD DVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  char *pcVar5;
  uint *local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  FUN_100073f0(0xc);
  DAT_100316d8 = 0;
  DAT_10030e48 = 0xffffffff;
  DAT_10030e38 = 0xffffffff;
  _Str1 = (uint *)FID_conflict___getenv_lk("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_10007490(0xc);
    DVar1 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_100316e0);
    if (DVar1 != 0xffffffff) {
      DAT_100316d8 = 1;
      DAT_10030da0 = DAT_100316e0 * 0x3c;
      if (DAT_10031726 != 0) {
        DAT_10030da0 = DAT_10030da0 + DAT_10031734 * 0x3c;
      }
      if ((DAT_1003177a == 0) || (DAT_10031788 == 0)) {
        DAT_10030da4 = 0;
        DAT_10030da8 = 0;
      }
      else {
        DAT_10030da4 = 1;
        DAT_10030da8 = (DAT_10031788 - DAT_10031734) * 0x3c;
      }
      iVar2 = WideCharToMultiByte(DAT_1003164c,0x220,(LPCWSTR)&DAT_100316e4,-1,PTR_DAT_10030e2c,0x3f
                                  ,(LPCSTR)0x0,&local_c);
      if ((iVar2 == 0) || (local_c != 0)) {
        *PTR_DAT_10030e2c = 0;
      }
      else {
        PTR_DAT_10030e2c[0x3f] = 0;
      }
      iVar2 = WideCharToMultiByte(DAT_1003164c,0x220,(LPCWSTR)&DAT_10031738,-1,PTR_DAT_10030e30,0x3f
                                  ,(LPCSTR)0x0,&local_c);
      if ((iVar2 == 0) || (local_c != 0)) {
        *PTR_DAT_10030e30 = 0;
      }
      else {
        PTR_DAT_10030e30[0x3f] = 0;
      }
    }
  }
  else if (((char)*_Str1 == '\0') ||
          ((DAT_1003178c != (uint *)0x0 &&
           (iVar2 = _strcmp((char *)_Str1,(char *)DAT_1003178c), iVar2 == 0)))) {
    FUN_10007490(0xc);
  }
  else {
    FUN_100041a0(DAT_1003178c,2);
    iVar2 = 0x10c;
    pcVar5 = "tzset.c";
    uVar4 = 2;
    sVar3 = _strlen((char *)_Str1);
    DAT_1003178c = (uint *)FUN_10003710((void *)(sVar3 + 1),uVar4,(int)pcVar5,iVar2);
    if (DAT_1003178c == (uint *)0x0) {
      FUN_10007490(0xc);
    }
    else {
      FUN_10001ec0(DAT_1003178c,_Str1);
      FUN_10007490(0xc);
      _strncpy(PTR_DAT_10030e2c,(char *)_Str1,3);
      PTR_DAT_10030e2c[3] = 0;
      local_10 = (uint *)((int)_Str1 + 3);
      if (*(char *)local_10 == '-') {
        local_8 = local_8 + 1;
        local_10 = _Str1 + 1;
      }
      iVar2 = FUN_100136a0((byte *)local_10);
      DAT_10030da0 = iVar2 * 0xe10;
      for (; ((char)*local_10 == '+' || (('/' < (char)*local_10 && ((char)*local_10 < ':'))));
          local_10 = (uint *)((int)local_10 + 1)) {
      }
      if ((char)*local_10 == ':') {
        local_10 = (uint *)((int)local_10 + 1);
        iVar2 = FUN_100136a0((byte *)local_10);
        DAT_10030da0 = DAT_10030da0 + iVar2 * 0x3c;
        for (; ('/' < (char)*local_10 && ((char)*local_10 < ':'));
            local_10 = (uint *)((int)local_10 + 1)) {
        }
        if ((char)*local_10 == ':') {
          local_10 = (uint *)((int)local_10 + 1);
          iVar2 = FUN_100136a0((byte *)local_10);
          DAT_10030da0 = DAT_10030da0 + iVar2;
          for (; ('/' < (char)*local_10 && ((char)*local_10 < ':'));
              local_10 = (uint *)((int)local_10 + 1)) {
          }
        }
      }
      if (local_8 != 0) {
        DAT_10030da0 = -DAT_10030da0;
      }
      DAT_10030da4 = (int)(char)*local_10;
      if (DAT_10030da4 == 0) {
        *PTR_DAT_10030e30 = 0;
      }
      else {
        _strncpy(PTR_DAT_10030e30,(char *)local_10,3);
        PTR_DAT_10030e30[3] = 0;
      }
    }
  }
  return;
}


/*
 * FUN_10013d00 at 10013d00
 * undefined4 __cdecl FUN_10013d00(int * param_1)
 * Address ranges: 10013d00-10013d2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10013d00(int *param_1)

{
  undefined4 uVar1;
  
  FUN_100073f0(0xb);
  uVar1 = FUN_10013d30(param_1);
  FUN_10007490(0xb);
  return uVar1;
}


/*
 * FUN_10013d30 at 10013d30
 * undefined4 __cdecl FUN_10013d30(int * param_1)
 * Address ranges: 10013d30-10014029
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10013d30(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_10030da4 == 0) {
    return 0;
  }
  if ((param_1[5] != DAT_10030e38) || (param_1[5] != DAT_10030e48)) {
    if (DAT_100316d8 == 0) {
      FUN_10014030(1,1,param_1[5],4,1,0,0,2,0,0,0);
      FUN_10014030(0,1,param_1[5],10,5,0,0,2,0,0,0);
    }
    else {
      if (DAT_10031778 == 0) {
        FUN_10014030(1,1,param_1[5],(uint)DAT_1003177a,(uint)DAT_1003177e,(uint)DAT_1003177c,0,
                     (uint)DAT_10031780,(uint)DAT_10031782,(uint)DAT_10031784,(uint)DAT_10031786);
      }
      else {
        FUN_10014030(1,0,param_1[5],(uint)DAT_1003177a,0,0,(uint)DAT_1003177e,(uint)DAT_10031780,
                     (uint)DAT_10031782,(uint)DAT_10031784,(uint)DAT_10031786);
      }
      if (DAT_10031724 == 0) {
        FUN_10014030(0,1,param_1[5],(uint)DAT_10031726,(uint)DAT_1003172a,(uint)DAT_10031728,0,
                     (uint)DAT_1003172c,(uint)DAT_1003172e,(uint)DAT_10031730,(uint)DAT_10031732);
      }
      else {
        FUN_10014030(0,0,param_1[5],(uint)DAT_10031726,0,0,(uint)DAT_1003172a,(uint)DAT_1003172c,
                     (uint)DAT_1003172e,(uint)DAT_10031730,(uint)DAT_10031732);
      }
    }
  }
  if (DAT_10030e3c < DAT_10030e4c) {
    if ((param_1[7] < DAT_10030e3c) || (DAT_10030e4c < param_1[7])) {
      return 0;
    }
    if ((DAT_10030e3c < param_1[7]) && (param_1[7] < DAT_10030e4c)) {
      return 1;
    }
  }
  else {
    if ((param_1[7] < DAT_10030e4c) || (DAT_10030e3c < param_1[7])) {
      return 1;
    }
    if ((DAT_10030e4c < param_1[7]) && (param_1[7] < DAT_10030e3c)) {
      return 0;
    }
  }
  iVar2 = (*param_1 + param_1[1] * 0x3c + param_1[2] * 0xe10) * 1000;
  if (param_1[7] == DAT_10030e3c) {
    if (iVar2 < DAT_10030e40) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (iVar2 < DAT_10030e50) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/*
 * FUN_10014030 at 10014030
 * undefined __cdecl FUN_10014030(int param_1, int param_2, uint param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10, int param_11)
 * Address ranges: 10014030-10014227
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl
FUN_10014030(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      local_10 = *(int *)(&DAT_10030e5c + param_4 * 4);
    }
    else {
      local_10 = *(int *)(&DAT_10030e90 + param_4 * 4);
    }
    local_10 = local_10 + 1;
    iVar1 = (int)(local_10 + (param_3 - 0x46) * 0x16d + -0xd + ((int)(param_3 - 1) >> 2)) % 7;
    if (param_6 < iVar1) {
      local_c = param_5 * 7 + local_10 + (param_6 - iVar1);
    }
    else {
      local_c = (param_5 + -1) * 7 + local_10 + (param_6 - iVar1);
    }
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        local_14 = *(int *)(&DAT_10030e60 + param_4 * 4);
      }
      else {
        local_14 = *(int *)(&DAT_10030e94 + param_4 * 4);
      }
      if (local_14 < local_c) {
        local_c = local_c + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      local_18 = *(int *)(&DAT_10030e5c + param_4 * 4);
    }
    else {
      local_18 = *(int *)(&DAT_10030e90 + param_4 * 4);
    }
    local_c = local_18 + param_7;
  }
  if (param_1 == 1) {
    DAT_10030e3c = local_c;
    DAT_10030e40 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c) * 1000;
    DAT_10030e38 = param_3;
  }
  else {
    DAT_10030e4c = local_c;
    DAT_10030e50 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c) * 1000 +
                   DAT_10030da8 * 1000;
    if (DAT_10030e50 < 0) {
      DAT_10030e50 = DAT_10030e50 + 86400000;
      DAT_10030e4c = local_c + -1;
    }
    else if (86399999 < DAT_10030e50) {
      DAT_10030e50 = DAT_10030e50 + -86400000;
      DAT_10030e4c = local_c + 1;
    }
    DAT_10030e48 = param_3;
  }
  return;
}


/*
 * FUN_10014230 at 10014230
 * int __cdecl FUN_10014230(LCID param_1, LCTYPE param_2, LPWSTR param_3, int param_4, UINT param_5)
 * Address ranges: 10014230-1001432c;10014344-100143c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10014230(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1002d8d8;
  puStack_10 = &LAB_1000eb08;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10031794 == 0) {
    ExceptionList = &local_14;
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10031794 = 2;
    }
    else {
      DAT_10031794 = 1;
    }
  }
  if (DAT_10031794 == 1) {
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
  }
  else if (DAT_10031794 == 2) {
    if (param_5 == 0) {
      param_5 = DAT_1003164c;
    }
    iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_10008bb0();
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x38) {
        iVar1 = 0;
      }
      else {
        iVar1 = GetLocaleInfoA(param_1,param_2,&stack0xffffffc8,iVar1);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else if (param_4 == 0) {
          iVar1 = MultiByteToWideChar(param_5,1,&stack0xffffffc8,-1,(LPWSTR)0x0,0);
        }
        else {
          iVar1 = MultiByteToWideChar(param_5,1,&stack0xffffffc8,-1,param_3,param_4);
        }
      }
    }
  }
  else {
    iVar1 = 0;
  }
  ExceptionList = local_14;
  return iVar1;
}


/*
 * FUN_100143d0 at 100143d0
 * int __cdecl FUN_100143d0(LCID param_1, LCTYPE param_2, LPSTR param_3, int param_4, UINT param_5)
 * Address ranges: 100143d0-100144ce;100144e6-10014574
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_100143d0(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1002d8e8;
  puStack_10 = &LAB_1000eb08;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10031798 == 0) {
    ExceptionList = &local_14;
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10031798 = 2;
    }
    else {
      DAT_10031798 = 1;
    }
  }
  if (DAT_10031798 == 2) {
    iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
  }
  else if (DAT_10031798 == 1) {
    if (param_5 == 0) {
      param_5 = DAT_1003164c;
    }
    iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_10008bb0();
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x38) {
        iVar1 = 0;
      }
      else {
        iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)&stack0xffffffc8,iVar1);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else if (param_4 == 0) {
          iVar1 = WideCharToMultiByte(param_5,0x220,(LPCWSTR)&stack0xffffffc8,-1,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
        }
        else {
          iVar1 = WideCharToMultiByte(param_5,0x220,(LPCWSTR)&stack0xffffffc8,-1,param_3,param_4,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
        }
      }
    }
  }
  else {
    iVar1 = 0;
  }
  ExceptionList = local_14;
  return iVar1;
}


/*
 * FUN_10014580 at 10014580
 * int __cdecl FUN_10014580(int param_1)
 * Address ranges: 10014580-1001458a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10014580(int param_1)

{
  return param_1 + 0x20;
}


/*
 * FUN_10014590 at 10014590
 * uint __cdecl FUN_10014590(uint param_1)
 * Address ranges: 10014590-10014622
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_10014590(uint param_1)

{
  bool bVar1;
  
  if (DAT_1003163c == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      param_1 = param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_100317c4);
    bVar1 = DAT_100317b4 == 0;
    if (!bVar1) {
      InterlockedDecrement(&DAT_100317c4);
      FUN_100073f0(0x13);
    }
    param_1 = FUN_10014630(param_1);
    if (bVar1) {
      InterlockedDecrement(&DAT_100317c4);
    }
    else {
      FUN_10007490(0x13);
    }
  }
  return param_1;
}


/*
 * FUN_10014630 at 10014630
 * uint __cdecl FUN_10014630(uint param_1)
 * Address ranges: 10014630-1001475a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_10014630(uint param_1)

{
  int iVar1;
  uint local_14;
  uint local_10;
  char local_c;
  char local_b;
  undefined1 local_a;
  int local_8;
  
  if (DAT_1003163c == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      param_1 = param_1 + 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_10030214 < 2) {
        local_14 = *(ushort *)(PTR_DAT_10030008 + param_1 * 2) & 1;
      }
      else {
        local_14 = FUN_1000b640(param_1,1);
      }
      if (local_14 == 0) {
        return param_1;
      }
    }
    if ((*(ushort *)(PTR_DAT_10030008 + ((int)param_1 >> 8 & 0xffU) * 2) & 0x8000) == 0) {
      local_c = (char)param_1;
      local_b = '\0';
      local_8 = 1;
    }
    else {
      local_c = (char)(param_1 >> 8);
      local_b = (char)param_1;
      local_a = 0;
      local_8 = 2;
    }
    iVar1 = FUN_1000e550(DAT_1003163c,0x100,&local_c,local_8,(LPWSTR)&local_10,3,0,1);
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        param_1 = local_10 & 0xff;
      }
      else {
        param_1 = local_10 & 0xff | (local_10 >> 8 & 0xff) << 8;
      }
    }
  }
  return param_1;
}


/*
 * __allmul at 10014760
 * longlong __stdcall __allmul(uint param_1, int param_2, uint param_3, int param_4)
 * Address ranges: 10014760-10014793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __allmul  Library: Visual Studio
 */


/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


/*
 * FUN_100147a0 at 100147a0
 * char * __cdecl FUN_100147a0(char * param_1)
 * Address ranges: 100147a0-100147cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char * __cdecl FUN_100147a0(char *param_1)

{
  char *pcVar1;
  
  FUN_100073f0(0xc);
  pcVar1 = FID_conflict___getenv_lk(param_1);
  FUN_10007490(0xc);
  return pcVar1;
}


/*
 * FID_conflict:__getenv_lk at 100147d0
 * char * __cdecl FID_conflict:__getenv_lk(char * _VarName)
 * Address ranges: 100147d0-10014895
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Multiple Matches With Different Base Names  __getenv_lk  _getenv  Library: Visual Studio 2003 Debug
 */


/* Library Function - Multiple Matches With Different Base Names
    __getenv_lk
    _getenv
   
   Library: Visual Studio 2003 Debug */

char * __cdecl FID_conflict___getenv_lk(char *_VarName)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *local_c;
  
  local_c = DAT_100314c8;
  if (DAT_10031a98 != 0) {
    if ((DAT_100314c8 == (int *)0x0) && (DAT_100314d0 != 0)) {
      iVar1 = FUN_100148f0();
      if (iVar1 != 0) {
        return (char *)0x0;
      }
      local_c = DAT_100314c8;
    }
    DAT_100314c8 = local_c;
    if ((local_c != (int *)0x0) && (_VarName != (char *)0x0)) {
      _MaxCount = _strlen(_VarName);
      for (; *local_c != 0; local_c = local_c + 1) {
        sVar2 = _strlen((char *)*local_c);
        if (((_MaxCount < sVar2) && (*(char *)(*local_c + _MaxCount) == '=')) &&
           (iVar1 = __mbsnbicoll((uchar *)*local_c,(uchar *)_VarName,_MaxCount), iVar1 == 0)) {
          return (char *)(*local_c + 1 + _MaxCount);
        }
      }
    }
  }
  return (char *)0x0;
}


/*
 * __mbsnbicoll at 100148a0
 * int __cdecl __mbsnbicoll(uchar * _Str1, uchar * _Str2, size_t _MaxCount)
 * Address ranges: 100148a0-100148ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __mbsnbicoll  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Debug */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_100149a0(DAT_10031a64,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_100317c8);
    if (iVar1 == 0) {
      iVar1 = 0x7fffffff;
    }
    else {
      iVar1 = iVar1 + -2;
    }
  }
  return iVar1;
}


/*
 * FUN_100148f0 at 100148f0
 * undefined4 __stdcall FUN_100148f0(void)
 * Address ranges: 100148f0-1001499d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_100148f0(void)

{
  void *cbMultiByte;
  uint *lpMultiByteStr;
  int iVar1;
  int *local_8;
  
  local_8 = DAT_100314d0;
  while( true ) {
    if (*local_8 == 0) {
      return 0;
    }
    cbMultiByte = (void *)WideCharToMultiByte(1,0,(LPCWSTR)*local_8,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                              (LPBOOL)0x0);
    if (cbMultiByte == (void *)0x0) {
      return 0xffffffff;
    }
    lpMultiByteStr = (uint *)FUN_10003710(cbMultiByte,2,0x1002d8f4,0x3d);
    if (lpMultiByteStr == (uint *)0x0) {
      return 0xffffffff;
    }
    iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*local_8,-1,(LPSTR)lpMultiByteStr,(int)cbMultiByte,
                                (LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) break;
    FUN_10014df0(lpMultiByteStr,0);
    local_8 = local_8 + 1;
  }
  return 0xffffffff;
}


/*
 * FUN_100149a0 at 100149a0
 * int __cdecl FUN_100149a0(LCID param_1, DWORD param_2, byte * param_3, int param_4, byte * param_5, int param_6, UINT param_7)
 * Address ranges: 100149a0-10014c7e;10014c96-10014d1c;10014d34-10014d97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl
FUN_100149a0(LCID param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,
            UINT param_7)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  BOOL BVar4;
  BYTE *local_44;
  _cpinfo local_40;
  PCNZWCH local_2c;
  PCNZWCH local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1002d948;
  puStack_10 = &LAB_1000eb08;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffa8;
  ExceptionList = &local_14;
  puVar2 = &stack0xffffffa8;
  if (DAT_1003179c == 0) {
    ExceptionList = &local_14;
    iVar3 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar3 == 0) {
      iVar3 = CompareStringA(0,0,"",1,"",1);
      if (iVar3 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1003179c = 2;
      puVar2 = local_1c;
    }
    else {
      DAT_1003179c = 1;
      puVar2 = local_1c;
    }
  }
  local_1c = puVar2;
  if (0 < param_4) {
    param_4 = FUN_10014da0((char *)param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_10014da0((char *)param_5,param_6);
  }
  if (DAT_1003179c == 2) {
    iVar3 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
  }
  else if (DAT_1003179c == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1003164c;
    }
    if ((param_4 == 0) || (param_6 == 0)) {
      if (param_4 == param_6) {
        ExceptionList = local_14;
        return 2;
      }
      if (1 < param_6) {
        ExceptionList = local_14;
        return 1;
      }
      if (1 < param_4) {
        ExceptionList = local_14;
        return 3;
      }
      BVar4 = GetCPInfo(param_7,&local_40);
      if (BVar4 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      if ((((param_4 != 0) || (param_6 != 1)) && ((param_4 != 1 || (param_6 != 0)))) &&
         (iVar3 = FUN_10003050(2,0x1002d900,0xb6,0,
                               (byte *)
                               "cchCount1==0 && cchCount2==1 || cchCount1==1 && cchCount2==0"),
         iVar3 == 1)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      if (0 < param_4) {
        if (local_40.MaxCharSize < 2) {
          ExceptionList = local_14;
          return 3;
        }
        local_44 = local_40.LeadByte;
        while( true ) {
          if ((*local_44 == 0) || (local_44[1] == 0)) {
            ExceptionList = local_14;
            return 3;
          }
          if ((*local_44 <= *param_3) && (*param_3 <= local_44[1])) break;
          local_44 = local_44 + 2;
        }
        ExceptionList = local_14;
        return 2;
      }
      if (0 < param_6) {
        if (local_40.MaxCharSize < 2) {
          ExceptionList = local_14;
          return 1;
        }
        local_44 = local_40.LeadByte;
        while( true ) {
          if ((*local_44 == 0) || (local_44[1] == 0)) {
            ExceptionList = local_14;
            return 1;
          }
          if ((*local_44 <= *param_5) && (*param_5 <= local_44[1])) break;
          local_44 = local_44 + 2;
        }
        ExceptionList = local_14;
        return 2;
      }
    }
    local_20 = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,param_4,(LPWSTR)0x0,0);
    if (local_20 == 0) {
      iVar3 = 0;
    }
    else {
      local_8 = 0;
      FUN_10008bb0();
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x58) {
        iVar3 = 0;
      }
      else {
        local_28 = (PCNZWCH)&stack0xffffffa8;
        local_1c = &stack0xffffffa8;
        iVar3 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,(LPWSTR)&stack0xffffffa8,
                                    local_20);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          local_24 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0);
          if (local_24 == 0) {
            iVar3 = 0;
          }
          else {
            local_8 = 1;
            FUN_10008bb0();
            local_8 = 0xffffffff;
            if (&stack0x00000000 == (undefined1 *)0x58) {
              iVar3 = 0;
            }
            else {
              local_2c = (PCNZWCH)&stack0xffffffa8;
              local_1c = &stack0xffffffa8;
              iVar3 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,(LPWSTR)&stack0xffffffa8
                                          ,local_24);
              if (iVar3 == 0) {
                iVar3 = 0;
              }
              else {
                iVar3 = CompareStringW(param_1,param_2,local_28,local_20,local_2c,local_24);
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar3 = 0;
  }
  ExceptionList = local_14;
  return iVar3;
}


/*
 * FUN_10014da0 at 10014da0
 * int __cdecl FUN_10014da0(char * param_1, int param_2)
 * Address ranges: 10014da0-10014def
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_10014da0(char *param_1,int param_2)

{
  int local_c;
  char *local_8;
  
  local_c = param_2;
  for (local_8 = param_1; (local_c != 0 && (*local_8 != '\0')); local_8 = local_8 + 1) {
    local_c = local_c + -1;
  }
  if (*local_8 == '\0') {
    param_2 = (int)local_8 - (int)param_1;
  }
  return param_2;
}


/*
 * FUN_10014df0 at 10014df0
 * undefined4 __cdecl FUN_10014df0(uint * param_1, int param_2)
 * Address ranges: 10014df0-100150cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10014df0(uint *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  uint *lpName;
  undefined1 *puVar5;
  bool bVar6;
  uint uVar7;
  char *pcVar8;
  int local_c;
  
  if (((param_1 == (uint *)0x0) ||
      (puVar1 = (uint *)FUN_10015240((byte *)param_1,0x3d), puVar1 == (uint *)0x0)) ||
     (param_1 == puVar1)) {
    return 0xffffffff;
  }
  bVar6 = *(byte *)((int)puVar1 + 1) == 0;
  if (DAT_100314c8 == DAT_100314cc) {
    DAT_100314c8 = copy_environ(DAT_100314c8);
  }
  if (DAT_100314c8 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_100314d0 == (undefined4 *)0x0)) {
      if (bVar6) {
        return 0;
      }
      DAT_100314c8 = (int *)FUN_10003710((void *)0x4,2,0x1002d960,0x87);
      if (DAT_100314c8 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_100314c8 = 0;
      if (DAT_100314d0 == (undefined4 *)0x0) {
        DAT_100314d0 = (undefined4 *)FUN_10003710((void *)0x4,2,0x1002d960,0x8e);
        if (DAT_100314d0 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_100314d0 = 0;
      }
    }
    else {
      iVar2 = FUN_100148f0();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_100314c8;
  local_c = findenv((uchar *)param_1,(int)puVar1 - (int)param_1);
  if ((local_c < 0) || (*piVar3 == 0)) {
    if (bVar6) {
      return 0;
    }
    if (local_c < 0) {
      local_c = -local_c;
    }
    piVar3 = FUN_10003ba0(piVar3,(void *)(local_c * 4 + 8),2,0x1002d960,0xce);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar3[local_c] = (int)param_1;
    piVar3[local_c + 1] = 0;
    DAT_100314c8 = piVar3;
  }
  else if (bVar6) {
    FUN_100041a0((void *)piVar3[local_c],2);
    for (; piVar3[local_c] != 0; local_c = local_c + 1) {
      piVar3[local_c] = piVar3[local_c + 1];
    }
    piVar3 = FUN_10003ba0(piVar3,(void *)(local_c << 2),2,0x1002d960,0xb9);
    if (piVar3 != (int *)0x0) {
      DAT_100314c8 = piVar3;
    }
  }
  else {
    piVar3[local_c] = (int)param_1;
  }
  if (param_2 != 0) {
    iVar2 = 0xe5;
    pcVar8 = "setenv.c";
    uVar7 = 2;
    sVar4 = _strlen((char *)param_1);
    lpName = (uint *)FUN_10003710((void *)(sVar4 + 2),uVar7,(int)pcVar8,iVar2);
    if (lpName != (uint *)0x0) {
      FUN_10001ec0(lpName,param_1);
      puVar5 = (undefined1 *)((int)lpName + ((int)puVar1 - (int)param_1));
      *puVar5 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar6 & (uint)(puVar5 + 1)));
      FUN_100041a0(lpName,2);
    }
  }
  return 0;
}


/*
 * findenv at 100150d0
 * int __cdecl findenv(uchar * param_1, size_t param_2)
 * Address ranges: 100150d0-1001514b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _findenv  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    _findenv
   
   Library: Visual Studio 2003 Debug */

int __cdecl findenv(uchar *param_1,size_t param_2)

{
  int iVar1;
  int *local_8;
  
  local_8 = DAT_100314c8;
  while( true ) {
    if (*local_8 == 0) {
      return -((int)local_8 - (int)DAT_100314c8 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*local_8,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*local_8 + param_2) == '=' || (*(char *)(*local_8 + param_2) == '\0')))) break;
    local_8 = local_8 + 1;
  }
  return (int)local_8 - (int)DAT_100314c8 >> 2;
}


/*
 * copy_environ at 10015150
 * int * __cdecl copy_environ(int * param_1)
 * Address ranges: 10015150-1001523d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _copy_environ  Library: Visual Studio 2003 Debug
 */


/* Library Function - Single Match
    _copy_environ
   
   Library: Visual Studio 2003 Debug */

int * __cdecl copy_environ(int *param_1)

{
  int *piVar1;
  size_t sVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int local_14;
  int *local_10;
  int *local_c;
  
  local_14 = 0;
  local_10 = param_1;
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    while (iVar5 = *local_10, local_10 = local_10 + 1, iVar5 != 0) {
      local_14 = local_14 + 1;
    }
    piVar1 = (int *)FUN_10003710((void *)(local_14 * 4 + 4),2,0x1002d960,0x146);
    if (piVar1 == (int *)0x0) {
      __amsg_exit(9);
    }
    local_c = piVar1;
    for (local_10 = param_1; *local_10 != 0; local_10 = local_10 + 1) {
      iVar5 = 0x14f;
      pcVar4 = "setenv.c";
      uVar3 = 2;
      sVar2 = _strlen((char *)*local_10);
      iVar5 = FUN_10003710((void *)(sVar2 + 1),uVar3,(int)pcVar4,iVar5);
      *local_c = iVar5;
      if (*local_c != 0) {
        FUN_10001ec0((uint *)*local_c,(uint *)*local_10);
      }
      local_c = local_c + 1;
    }
    *local_c = 0;
  }
  return piVar1;
}


/*
 * FUN_10015240 at 10015240
 * byte * __cdecl FUN_10015240(byte * param_1, uint param_2)
 * Address ranges: 10015240-1001532c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


byte * __cdecl FUN_10015240(byte *param_1,uint param_2)

{
  ushort uVar1;
  byte *pbVar2;
  
  if (DAT_1003184c == 0) {
    param_1 = (byte *)_strchr((char *)param_1,param_2);
  }
  else {
    FUN_100073f0(0x19);
    while( true ) {
      uVar1 = (ushort)*param_1;
      if (uVar1 == 0) break;
      if (((&DAT_10031961)[uVar1] & 4) == 0) {
        pbVar2 = param_1;
        if (param_2 == uVar1) break;
      }
      else {
        pbVar2 = param_1 + 1;
        if (*pbVar2 == 0) {
          FUN_10007490(0x19);
          return (byte *)0x0;
        }
        if (param_2 == CONCAT11(*param_1,*pbVar2)) {
          FUN_10007490(0x19);
          return param_1;
        }
      }
      param_1 = pbVar2;
      param_1 = param_1 + 1;
    }
    FUN_10007490(0x19);
    if (param_2 != uVar1) {
      param_1 = (byte *)0x0;
    }
  }
  return param_1;
}


/*
 * _strchr at 10015340
 * char * __cdecl _strchr(char * _Str, int _Val)
 * Address ranges: 10015330-10015334;10015340-100153fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _strchr  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _strchr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strchr(char *_Str,int _Val)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)_Str & 3) != 0) {
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    _Str = (char *)((int)_Str + 1);
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *(uint *)_Str;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)_Val,(char)_Val),CONCAT11((char)_Val,(char)_Val));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = (uint *)((int)_Str + 4);
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      _Str = (char *)puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (char *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (char *)0x0;
        }
      }
    }
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 1);
    }
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 3);
    }
    _Str = (char *)puVar5;
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}


/*
 * KERNEL32.DLL::RtlUnwind at 10015574
 * void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
 * Address ranges: 10015574-10015579
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::RtlUnwind
 */


void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x10015574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}


/*
 * FUN_100155d0 at 100155d0
 * DWORD __cdecl FUN_100155d0(uint param_1)
 * Address ranges: 100155d0-1001568b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


DWORD __cdecl FUN_100155d0(uint param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  DWORD local_8;
  
  if ((param_1 < DAT_10031bfc) &&
     ((*(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100029d0(param_1);
    DVar3 = FUN_10006ab0(param_1,0,1);
    if (DVar3 == 0xffffffff) {
      local_8 = 0xffffffff;
    }
    else {
      local_8 = FUN_10006ab0(param_1,0,2);
      if (DVar3 != local_8) {
        FUN_10006ab0(param_1,DVar3,0);
      }
    }
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    pDVar2 = FUN_10006f30();
    *pDVar2 = 0;
    local_8 = 0xffffffff;
  }
  return local_8;
}


/*
 * FUN_10015690 at 10015690
 * undefined4 __cdecl FUN_10015690(int param_1)
 * Address ranges: 10015690-1001569a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_10015690(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


