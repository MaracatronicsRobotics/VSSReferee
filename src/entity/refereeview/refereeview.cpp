#include "refereeview.h"

MainWindow* RefereeView::_refereeUI = NULL;

QString RefereeView::name(){
    return "Referee View";
}

RefereeView::RefereeView()
{
    _refereeUI = new MainWindow(nullptr);
    _refereeUI->show();
}

RefereeView::~RefereeView(){
    _refereeUI->close();

    delete _refereeUI;
}

void RefereeView::initialization(){
    std::cout << "[Referee View] Thread started. " << std::endl;
}

void RefereeView::loop(){

}

void RefereeView::finalization(){
    std::cout << "[Referee View] Thread ended. " << std::endl;
}

void RefereeView::updateDetection(fira_message::Frame frame){
    _refereeUI->updateDetection(frame);
}

void RefereeView::addRefereeCommand(QString command){
    _refereeUI->addRefereeCommand(command);
}

void RefereeView::setRefereeCommand(QString command){
    _refereeUI->setRefereeCommand(command);
}

void RefereeView::addRefereeWarning(QString command){
    _refereeUI->addRefereeWarning(command);
}

void RefereeView::setCurrentTime(int time){
    _refereeUI->setCurrentTime(time);
}

bool RefereeView::getBlueIsLeftSide(){
    return _refereeUI->getBlueIsLeftSide();
}

void RefereeView::drawText(vector2d pos, char *str){
    _refereeUI->drawText(pos, str);
}
