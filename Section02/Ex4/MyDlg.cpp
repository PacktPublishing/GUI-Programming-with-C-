/*
 * =====================================================================================
 *
 *       Filename:  MyDlg.cpp
 *
 *    Description:  Simple Qt application with QDialog, QPushButton and QxLayout
 *
 *        Version:  1.0
 *        Created:  10/16/2016 05:11:17 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jeganathan Swaminathan <jegan@tektutor.org>
 *   Organization:  TekTutor <www.tektutor.org>
 *
 * =====================================================================================
 */
#include "MyDlg.h"

MyDlg::MyDlg() {
	pLayout = new QGridLayout(this);

	pBttn1  = new QPushButton ("Button 1");
	pBttn2  = new QPushButton ("Button 2");
	pBttn3  = new QPushButton ("Button 3");
	pBttn4  = new QPushButton ("Button 4");
	pBttn5  = new QPushButton ("Button 5");

	pBttn6  = new QPushButton ("Button 6");
	pBttn7  = new QPushButton ("Button 7");
	pBttn8  = new QPushButton ("Button 8");

	pBttn3->setSizePolicy ( QSizePolicy::Expanding, QSizePolicy::Expanding );

  pLayout->addWidget ( pBttn1, 0, 0, 1, 1 );
  pLayout->addWidget ( pBttn2, 0, 1, 1, 2 );
  pLayout->addWidget ( pBttn3, 0, 3, 2, 1 );
  pLayout->addWidget ( pBttn4, 1, 0, 1, 3 );

  pLayout->addWidget ( pBttn5, 2, 0 );
  pLayout->addWidget ( pBttn6, 2, 1 );
  pLayout->addWidget ( pBttn7, 2, 2 );
  pLayout->addWidget ( pBttn8, 2, 3 );

	setLayout ( pLayout );

	setWindowTitle ("Grid Layout");
}
